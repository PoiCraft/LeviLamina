#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/systems/ITickingSystem.h"

class GoalSelectorSystem : public ::ITickingSystem {
public:
    // prevent constructor by default
    GoalSelectorSystem& operator=(GoalSelectorSystem const&);
    GoalSelectorSystem(GoalSelectorSystem const&);
    GoalSelectorSystem();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1GoalSelectorSystem@@UEAA@XZ
    virtual ~GoalSelectorSystem() = default;

    // vIndex: 2, symbol: ?tick@GoalSelectorSystem@@UEAAXAEAVEntityRegistry@@@Z
    virtual void tick(class EntityRegistry& registry);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_tickGoalSelectorComponent@GoalSelectorSystem@@CAXAEAVActorOwnerComponent@@@Z
    MCAPI static void _tickGoalSelectorComponent(class ActorOwnerComponent&);

    // NOLINTEND
};
