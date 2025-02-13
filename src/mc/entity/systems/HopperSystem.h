#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/systems/ITickingSystem.h"

class HopperSystem : public ::ITickingSystem {
public:
    // prevent constructor by default
    HopperSystem& operator=(HopperSystem const&);
    HopperSystem(HopperSystem const&);
    HopperSystem();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1HopperSystem@@UEAA@XZ
    virtual ~HopperSystem() = default;

    // vIndex: 2, symbol: ?tick@HopperSystem@@UEAAXAEAVEntityRegistry@@@Z
    virtual void tick(class EntityRegistry& registry);

    // NOLINTEND
};
