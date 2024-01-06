#include "ll/api/Logger.h"
#include "ll/api/memory/Hook.h"
#include "ll/core/LeviLamina.h"
#include "magic_enum.hpp"
#include "mc/util/Random.h"
#include "mc/util/WorldChangeTransaction.h"
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/BlockSource.h"
#include "mc/world/level/block/Block.h"
#include "mc/world/level/levelgen/structure/StructureStart.h"


LL_AUTO_TYPED_INSTANCE_HOOK(
    StructureStartHook,
    ll::memory::HookPriority::Normal,
    StructureStart,
    &StructureStart::calculateBoundingBox,
    void
) {
    origin();

    ll::logger.info("calculateBoundingBox");
    ll::logger.info("StructureStart:");
    ll::logger.info("mChunkX={}", this->mChunkX);
    ll::logger.info("mChunkZ={}", this->mChunkZ);
    unhook();
}

LL_AUTO_TYPED_INSTANCE_HOOK(
    WorldChangeTransactionHook,
    ll::memory::HookPriority::Normal,
    WorldChangeTransaction,
    &WorldChangeTransaction::apply,
    bool
) {
    bool rtv = origin();

    ll::logger.info("{}<-calculateBoundingBox", rtv);
    ll::logger.info("WorldChangeTransaction:");
    for (auto& v : this->mData->mChanges) {
        ll::logger.info(
            "mData->mChanges[{},{{{},{},{}}}]",
            v.first.toString(),
            v.second.mUpdateFlags,
            v.second.mOldBlock->getName().getString(),
            v.second.mNewBlock->getName().getString()
        );
    }

    return rtv;
}
