#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/puv/EquipmentSlot.h"
#include "mc/entity/utilities/ActorDamageCause.h"
#include "mc/entity/utilities/ActorFlags.h"
#include "mc/entity/utilities/ActorInitializationMethod.h"
#include "mc/entity/utilities/ActorType.h"
#include "mc/enums/ArmorMaterialType.h"
#include "mc/enums/ArmorSlot.h"
#include "mc/enums/ArmorTextureType.h"
#include "mc/enums/HandSlot.h"
#include "mc/enums/InputMode.h"
#include "mc/enums/MaterialType.h"
#include "mc/enums/NewInteractionModel.h"
#include "mc/events/ActorEvent.h"
#include "mc/events/LevelSoundEvent.h"
#include "mc/server/commands/CommandPermissionLevel.h"
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/projectile/PredictableProjectile.h"
#include "mc/world/item/components/ItemUseMethod.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class WindChargeProjectile : public ::PredictableProjectile {
public:
    // prevent constructor by default
    WindChargeProjectile& operator=(WindChargeProjectile const&);
    WindChargeProjectile(WindChargeProjectile const&);
    WindChargeProjectile();

public:
    // NOLINTBEGIN
    // vIndex: 4, symbol:
    // ?reloadHardcoded@WindChargeProjectile@@UEAAXW4ActorInitializationMethod@@AEBVVariantParameterList@@@Z
    virtual void reloadHardcoded(::ActorInitializationMethod, class VariantParameterList const&);

    // vIndex: 6, symbol:
    // ?initializeComponents@WindChargeProjectile@@UEAAXW4ActorInitializationMethod@@AEBVVariantParameterList@@@Z
    virtual void initializeComponents(::ActorInitializationMethod, class VariantParameterList const&);

    // vIndex: 10, symbol: __gen_??1WindChargeProjectile@@UEAA@XZ
    virtual ~WindChargeProjectile() = default;

    // vIndex: 13, symbol: ?remove@WindChargeProjectile@@UEAAXXZ
    virtual void remove();

    // vIndex: 48, symbol: ?isPickable@WindChargeProjectile@@UEAA_NXZ
    virtual bool isPickable();

    // vIndex: 81, symbol: ?getPickRadius@WindChargeProjectile@@UEAAMXZ
    virtual float getPickRadius();

    // vIndex: 97, symbol: ?getSourceUniqueID@WindChargeProjectile@@UEBA?AUActorUniqueID@@XZ
    virtual struct ActorUniqueID getSourceUniqueID() const;

    // vIndex: 159, symbol: ?readAdditionalSaveData@WindChargeProjectile@@UEAAXAEBVCompoundTag@@AEAVDataLoadHelper@@@Z
    virtual void readAdditionalSaveData(class CompoundTag const&, class DataLoadHelper&);

    // vIndex: 160, symbol: ?addAdditionalSaveData@WindChargeProjectile@@UEBAXAEAVCompoundTag@@@Z
    virtual void addAdditionalSaveData(class CompoundTag&) const;

    // symbol:
    // ??0WindChargeProjectile@@QEAA@PEAVActorDefinitionGroup@@AEBUActorDefinitionIdentifier@@AEAVEntityContext@@@Z
    MCAPI
    WindChargeProjectile(class ActorDefinitionGroup*, struct ActorDefinitionIdentifier const&, class EntityContext&);

    // symbol: ?calculateKnockback@WindChargeProjectile@@SA?AVVec3@@AEBVExplosion@@AEBVActor@@M@Z
    MCAPI static class Vec3 calculateKnockback(class Explosion const&, class Actor const&, float);

    // NOLINTEND
};
