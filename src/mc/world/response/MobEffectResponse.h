#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/json_utils/JsonSchemaObjectNode.h"
#include "mc/util/Factory.h"
#include "mc/world/response/EventResponse.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class MobEffectResponse : public ::EventResponse {
public:
    // prevent constructor by default
    MobEffectResponse& operator=(MobEffectResponse const&);
    MobEffectResponse(MobEffectResponse const&);
    MobEffectResponse();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~MobEffectResponse() = default;

    // vIndex: 1
    virtual std::string const& getName() const;

    // vIndex: 2
    virtual void executeAction(class RenderParams& params) const;

    // vIndex: 3
    virtual void buildSchema(
        std::shared_ptr<
            class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, struct EventResponseCollection>>& root,
        class Factory<class EventResponse> const&                                                              factory
    ) const;

    MCAPI static std::string const NameID;

    // NOLINTEND
};
