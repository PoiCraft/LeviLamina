#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/deps/input/InputMode.h"
#include "mc/deps/puv/EquipmentSlot.h"
#include "mc/deps/puv/LevelSoundEvent.h"
#include "mc/input/NewInteractionModel.h"
#include "mc/network/packet/types/world/actor/ActorEvent.h"
#include "mc/server/commands/CommandPermissionLevel.h"
#include "mc/world/actor/ActorDamageCause.h"
#include "mc/world/actor/ActorFlags.h"
#include "mc/world/actor/ActorInitializationMethod.h"
#include "mc/world/actor/ActorType.h"
#include "mc/world/actor/ArmorMaterialType.h"
#include "mc/world/actor/item/Minecart.h"
#include "mc/world/actor/item/MinecartType.h"
#include "mc/world/item/ArmorSlot.h"
#include "mc/world/item/HandSlot.h"
#include "mc/world/item/ItemUseMethod.h"
#include "mc/world/level/material/MaterialType.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class MinecartHopper : public ::Minecart {
public:
    // prevent constructor by default
    MinecartHopper& operator=(MinecartHopper const&);
    MinecartHopper(MinecartHopper const&);
    MinecartHopper();

public:
    // NOLINTBEGIN
    // vIndex: 10
    virtual ~MinecartHopper() = default;

    // vIndex: 151
    virtual void destroy(class ActorDamageSource const& source, bool dropMinecartComponents);

    // vIndex: 152
    virtual ::MinecartType getType();

    // vIndex: 153
    virtual class Block const* getDefaultDisplayBlock() const;

    // vIndex: 154
    virtual int getDefaultDisplayOffset() const;

    // vIndex: 155
    virtual void applyNaturalSlowdown(class BlockSource& region);

    MCAPI MinecartHopper(
        class ActorDefinitionGroup*             definitions,
        struct ActorDefinitionIdentifier const& definitionName,
        class EntityContext&                    entityContext
    );

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void* ctor$(
        class ActorDefinitionGroup*             definitions,
        struct ActorDefinitionIdentifier const& definitionName,
        class EntityContext&                    entityContext
    );

    MCAPI void applyNaturalSlowdown$(class BlockSource& region);

    MCAPI void destroy$(class ActorDamageSource const& source, bool dropMinecartComponents);

    MCAPI class Block const* getDefaultDisplayBlock$() const;

    MCAPI int getDefaultDisplayOffset$() const;

    MCAPI ::MinecartType getType$();

    // NOLINTEND
};
