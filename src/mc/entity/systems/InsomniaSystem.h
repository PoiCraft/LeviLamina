#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/systems/ITickingSystem.h"

class InsomniaSystem : public ::ITickingSystem {
public:
    // prevent constructor by default
    InsomniaSystem& operator=(InsomniaSystem const&);
    InsomniaSystem(InsomniaSystem const&);
    InsomniaSystem();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1InsomniaSystem@@UEAA@XZ
    virtual ~InsomniaSystem() = default;

    // vIndex: 2, symbol: ?tick@InsomniaSystem@@UEAAXAEAVEntityRegistry@@@Z
    virtual void tick(class EntityRegistry& registry);

    // NOLINTEND
};
