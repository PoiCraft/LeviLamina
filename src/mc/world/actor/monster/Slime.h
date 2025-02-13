#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/OwnerPtr.h"
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
#include "mc/world/actor/monster/Monster.h"
#include "mc/world/item/components/ItemUseMethod.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class Slime : public ::Monster {
public:
    // prevent constructor by default
    Slime& operator=(Slime const&);
    Slime(Slime const&);
    Slime();

public:
    // NOLINTBEGIN
    // vIndex: 4, symbol: ?reloadHardcoded@Slime@@UEAAXW4ActorInitializationMethod@@AEBVVariantParameterList@@@Z
    virtual void reloadHardcoded(::ActorInitializationMethod method, class VariantParameterList const& params);

    // vIndex: 10, symbol: ??1Slime@@UEAA@XZ
    virtual ~Slime();

    // vIndex: 13, symbol: ?remove@Slime@@UEAAXXZ
    virtual void remove();

    // vIndex: 41, symbol: ?getShadowRadius@Slime@@UEBAMXZ
    virtual float getShadowRadius() const;

    // vIndex: 109, symbol: ?onSynchedDataUpdate@Slime@@UEAAXH@Z
    virtual void onSynchedDataUpdate(int dataId);

    // vIndex: 159, symbol: ?readAdditionalSaveData@Slime@@MEAAXAEBVCompoundTag@@AEAVDataLoadHelper@@@Z
    virtual void readAdditionalSaveData(class CompoundTag const& tag, class DataLoadHelper& dataLoadHelper);

    // vIndex: 160, symbol: ?addAdditionalSaveData@Slime@@MEBAXAEAVCompoundTag@@@Z
    virtual void addAdditionalSaveData(class CompoundTag& tag) const;

    // vIndex: 171, symbol: ?aiStep@Slime@@UEAAXXZ
    virtual void aiStep();

    // vIndex: 173, symbol: ?checkSpawnRules@Slime@@UEAA_N_N@Z
    virtual bool checkSpawnRules(bool fromSpawner);

    // vIndex: 198, symbol: ?_getWalkTargetValue@Slime@@MEAAMAEBVBlockPos@@@Z
    virtual float _getWalkTargetValue(class BlockPos const& pos);

    // vIndex: 205, symbol: ?doPlayLandSound@Slime@@MEAA_NXZ
    virtual bool doPlayLandSound();

    // vIndex: 206, symbol: ?playJumpSound@Slime@@MEAAXXZ
    virtual void playJumpSound();

    // vIndex: 207, symbol: ?decreaseSquish@Slime@@MEAAXXZ
    virtual void decreaseSquish();

    // vIndex: 208, symbol: ?createChild@Slime@@MEAA?AV?$OwnerPtr@VEntityContext@@@@H@Z
    virtual class OwnerPtr<class EntityContext> createChild(int i);

    // symbol: ??0Slime@@QEAA@PEAVActorDefinitionGroup@@AEBUActorDefinitionIdentifier@@AEAVEntityContext@@@Z
    MCAPI Slime(
        class ActorDefinitionGroup*             definitions,
        struct ActorDefinitionIdentifier const& definitionName,
        class EntityContext&                    entityContext
    );

    // symbol: ?getOldSquishValue@Slime@@QEBAMXZ
    MCAPI float getOldSquishValue() const;

    // symbol: ?getSlimeSize@Slime@@QEBAHXZ
    MCAPI int getSlimeSize() const;

    // symbol: ?getSquishValue@Slime@@QEBAMXZ
    MCAPI float getSquishValue() const;

    // symbol: ?postNormalTick@Slime@@QEAAX_N@Z
    MCAPI void postNormalTick(bool wasOnGround);

    // symbol: ?preNormalTick@Slime@@QEAAXXZ
    MCAPI void preNormalTick();

    // symbol: ?getSpawnRulesCallback@Slime@@SA?AV?$function@$$A6A_NAEBVSpawnConditions@@AEAVBlockSource@@@Z@std@@XZ
    MCAPI static std::function<bool(class SpawnConditions const&, class BlockSource&)> getSpawnRulesCallback();

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol: ?justJumped@Slime@@IEAAXXZ
    MCAPI void justJumped();

    // symbol: ?justLanded@Slime@@IEAAXXZ
    MCAPI void justLanded();

    // symbol: ?setSlimeSize@Slime@@IEAAXH@Z
    MCAPI void setSlimeSize(int size);

    // NOLINTEND
};
