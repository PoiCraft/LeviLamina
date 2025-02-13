#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/systems/ITickingSystem.h"

class AmbientSoundServerSystem : public ::ITickingSystem {
public:
    // prevent constructor by default
    AmbientSoundServerSystem& operator=(AmbientSoundServerSystem const&);
    AmbientSoundServerSystem(AmbientSoundServerSystem const&);
    AmbientSoundServerSystem();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1AmbientSoundServerSystem@@UEAA@XZ
    virtual ~AmbientSoundServerSystem() = default;

    // vIndex: 2, symbol: ?tick@AmbientSoundServerSystem@@UEAAXAEAVEntityRegistry@@@Z
    virtual void tick(class EntityRegistry& registry);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?_tickAmbientSoundComponent@AmbientSoundServerSystem@@CAXAEAVActorOwnerComponent@@AEAVAmbientSoundServerComponent@@@Z
    MCAPI static void _tickAmbientSoundComponent(class ActorOwnerComponent&, class AmbientSoundServerComponent&);

    // NOLINTEND
};
