#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/systems/ITickingSystem.h"

class CommandBlockSystem : public ::ITickingSystem {
public:
    // prevent constructor by default
    CommandBlockSystem& operator=(CommandBlockSystem const&);
    CommandBlockSystem(CommandBlockSystem const&);
    CommandBlockSystem();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1CommandBlockSystem@@UEAA@XZ
    virtual ~CommandBlockSystem() = default;

    // vIndex: 2, symbol: ?tick@CommandBlockSystem@@UEAAXAEAVEntityRegistry@@@Z
    virtual void tick(class EntityRegistry& registry);

    // NOLINTEND
};
