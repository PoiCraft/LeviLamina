#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/OwnerPtr.h"
#include "mc/deps/core/common/bedrock/EnableNonOwnerReferences.h"
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"
#include "mc/entity/utilities/ActorInitializationMethod.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock { class EnableNonOwnerReferences; }
namespace Bedrock::PubSub { class Subscription; }
// clang-format on

class ActorManager : public ::Bedrock::EnableNonOwnerReferences {
public:
    // prevent constructor by default
    ActorManager& operator=(ActorManager const&);
    ActorManager(ActorManager const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1ActorManager@@UEAA@XZ
    virtual ~ActorManager() = default;

    // symbol: ??0ActorManager@@QEAA@XZ
    MCAPI ActorManager();

    // symbol: ?addActorEntity@ActorManager@@QEAAPEAVActor@@AEAVDimension@@V?$OwnerPtr@VEntityContext@@@@@Z
    MCAPI class Actor* addActorEntity(class Dimension&, class OwnerPtr<class EntityContext>);

    // symbol: ?addActorEntity@ActorManager@@QEAAPEAVActor@@AEAVIAddActorEntityProxy@@V?$OwnerPtr@VEntityContext@@@@@Z
    MCAPI class Actor* addActorEntity(class IAddActorEntityProxy&, class OwnerPtr<class EntityContext> entity);

    // symbol: ?cleanupActorEntityReferencesGarbageCollect@ActorManager@@QEAAXV?$OwnerPtr@VEntityContext@@@@@Z
    MCAPI void cleanupActorEntityReferencesGarbageCollect(class OwnerPtr<class EntityContext>);

    // symbol: ?cleanupRemovedActorEntityReferencesGarbageCollect@ActorManager@@QEAAXV?$OwnerPtr@VEntityContext@@@@@Z
    MCAPI void cleanupRemovedActorEntityReferencesGarbageCollect(class OwnerPtr<class EntityContext>);

    // symbol:
    // ?deleteActorEntityFromWorldAndTakeEntity@ActorManager@@QEAA?AV?$OwnerPtr@VEntityContext@@@@VWeakEntityRef@@@Z
    MCAPI class OwnerPtr<class EntityContext> deleteActorEntityFromWorldAndTakeEntity(class WeakEntityRef entityRef);

    // symbol: ?forceRemoveActor@ActorManager@@QEAAXAEAVActor@@@Z
    MCAPI void forceRemoveActor(class Actor& actor);

    // symbol: ?forceRemoveActorFromWorld@ActorManager@@QEAAXAEAVActor@@@Z
    MCAPI void forceRemoveActorFromWorld(class Actor& actor);

    // symbol:
    // ?getEntities@ActorManager@@QEBAAEBV?$vector@V?$OwnerPtr@VEntityContext@@@@V?$allocator@V?$OwnerPtr@VEntityContext@@@@@std@@@std@@XZ
    MCAPI std::vector<class OwnerPtr<class EntityContext>> const& getEntities() const;

    // symbol:
    // ?initializeWithActorGarbageCollector@ActorManager@@QEAAXV?$not_null@V?$NonOwnerPointer@VActorGarbageCollector@@@Bedrock@@@gsl@@@Z
    MCAPI void initializeWithActorGarbageCollector(Bedrock::NotNullNonOwnerPtr<class ActorGarbageCollector>);

    // symbol:
    // ?initializeWithProxy@ActorManager@@QEAAXV?$unique_ptr@VIActorManagerProxy@@U?$default_delete@VIActorManagerProxy@@@std@@@std@@@Z
    MCAPI void initializeWithProxy(std::unique_ptr<class IActorManagerProxy>);

    // symbol: ?onChunkDiscarded@ActorManager@@QEAAXVWeakEntityRef@@@Z
    MCAPI void onChunkDiscarded(class WeakEntityRef entityRef);

    // symbol:
    // ?registerActorEntityAddedCallback@ActorManager@@QEAA?AVSubscription@PubSub@Bedrock@@V?$function@$$A6AXAEAVActor@@@Z@std@@@Z
    MCAPI class Bedrock::PubSub::Subscription
    registerActorEntityAddedCallback(std::function<void(class Actor&)> callback);

    // symbol:
    // ?registerOnRemoveActorEntityReferences@ActorManager@@QEAA?AVSubscription@PubSub@Bedrock@@V?$function@$$A6AXAEAVActor@@@Z@std@@@Z
    MCAPI class Bedrock::PubSub::Subscription
    registerOnRemoveActorEntityReferences(std::function<void(class Actor&)> callback);

    // symbol:
    // ?registerPostReloadActor@ActorManager@@QEAA?AVSubscription@PubSub@Bedrock@@V?$function@$$A6AXAEAVActor@@W4ActorInitializationMethod@@@Z@std@@@Z
    MCAPI class Bedrock::PubSub::Subscription
        registerPostReloadActor(std::function<void(class Actor&, ::ActorInitializationMethod)>);

    // symbol: ?removeActorEntityAndTakeEntity@ActorManager@@QEAA?AV?$OwnerPtr@VEntityContext@@@@VWeakEntityRef@@@Z
    MCAPI class OwnerPtr<class EntityContext> removeActorEntityAndTakeEntity(class WeakEntityRef entityRef);

    // symbol: ?removeActorEntityReferencesForDeletion@ActorManager@@QEAAXAEAVActor@@@Z
    MCAPI void removeActorEntityReferencesForDeletion(class Actor& actor);

    // symbol: ?removeEntity@ActorManager@@QEAA?AV?$OwnerPtr@VEntityContext@@@@VWeakEntityRef@@@Z
    MCAPI class OwnerPtr<class EntityContext> removeEntity(class WeakEntityRef entityRef);

    // symbol: ?setLevelIsTearingDown@ActorManager@@QEAAXXZ
    MCAPI void setLevelIsTearingDown();

    // symbol: ?takeEntity@ActorManager@@QEAA?AV?$OwnerPtr@VEntityContext@@@@VWeakEntityRef@@AEAVLevelChunk@@@Z
    MCAPI class OwnerPtr<class EntityContext> takeEntity(class WeakEntityRef entityRef, class LevelChunk& levelChunk);

    // NOLINTEND
};
