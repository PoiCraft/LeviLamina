#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/json_utils/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class NpcDefinition {
public:
    // prevent constructor by default
    NpcDefinition& operator=(NpcDefinition const&);
    NpcDefinition(NpcDefinition const&);
    NpcDefinition();

public:
    // NOLINTBEGIN
    MCAPI void initialize(class EntityContext& entity, class NpcComponent& component) const;

    MCAPI static void buildSchema(
        std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class NpcDefinition>>& root
    );

    // NOLINTEND
};
