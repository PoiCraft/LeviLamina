#include "ll/api/command/OverloadData.h"
#include "ll/api/command/CommandHandle.h"
#include "ll/api/command/CommandRegistrar.h"

namespace ll::command {

bool OverloadData::tryRegisterEnum(
    std::string const&                                 name,
    std::vector<std::pair<std::string, uint64>> const& values,
    Bedrock::typeid_t<CommandRegistry>                 type,
    CommandRegistry::ParseFn                           parser
) {
    return handle->registrar->tryRegisterEnum(name, values, type, parser);
}
bool OverloadData::tryRegisterSoftEnum(std::string const& name, std::vector<std::string> values) {
    return handle->registrar->tryRegisterSoftEnum(name, values);
}

CommandParameterData& OverloadData::back() {
    if (!params.empty()) {
        return params.back();
    } else {
        throw std::runtime_error("empty overload");
    }
}

CommandParameterData& OverloadData::addParamImpl(
    Bedrock::typeid_t<CommandRegistry> id,
    CommandRegistry::ParseFn           parser,
    std::string_view                   name,
    CommandParameterDataType           type,
    char const*                        enumNameOrPostfix,
    int                                offset,
    int                                flagOffset,
    bool                               optional
) {
    auto& param =
        params.emplace_back(id, parser, std::string{name}, type, enumNameOrPostfix, offset, optional, flagOffset);
    if (id.value == Bedrock::type_id<CommandRegistry, CommandBlockName>().value) {
        param.addOptions(CommandParameterOption::HasSemanticConstraint);
    }
    if (type == CommandParameterDataType::Enum) {
        param.addOptions(CommandParameterOption::EnumAutocompleteExpansion);
    }
    return param;
}
CommandParameterData& OverloadData::addTextImpl(std::string_view text, int offset) {
    return addParamImpl(
        Bedrock::type_id<CommandRegistry, Placeholder>(),
        &CommandRegistry::parse<Placeholder>,
        text,
        CommandParameterDataType::Enum,
        handle->addText(text),
        offset,
        -1,
        false
    );
}

void OverloadData::setFactory(CommandRegistry::FactoryFn fn) {
    factory = fn;
    handle->registerOverload(std::move(*this));
}
} // namespace ll::command
