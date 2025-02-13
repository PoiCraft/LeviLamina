#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/systems/ITickingSystem.h"

class AgentDestroyCommandSystem : public ::ITickingSystem {
public:
    // prevent constructor by default
    AgentDestroyCommandSystem& operator=(AgentDestroyCommandSystem const&);
    AgentDestroyCommandSystem(AgentDestroyCommandSystem const&);
    AgentDestroyCommandSystem();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1AgentDestroyCommandSystem@@UEAA@XZ
    virtual ~AgentDestroyCommandSystem() = default;

    // vIndex: 2, symbol: ?tick@AgentDestroyCommandSystem@@UEAAXAEAVEntityRegistry@@@Z
    virtual void tick(class EntityRegistry& registry);

    // NOLINTEND
};
