#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SculkUtils {
// NOLINTBEGIN
// symbol: ?canSpreadIntoBlock@SculkUtils@@YA_NAEAVIBlockWorldGenAPI@@AEBVBlock@@AEBVBlockPos@@@Z
MCAPI bool canSpreadIntoBlock(class IBlockWorldGenAPI& target, class Block const& block, class BlockPos const& pos);

// symbol:
// ?generateSculkReplaceableBlocks@SculkUtils@@YA?BV?$set@PEBVBlock@@U?$less@PEBVBlock@@@std@@V?$allocator@PEBVBlock@@@3@@std@@XZ
MCAPI std::set<class Block const*> const generateSculkReplaceableBlocks();

// symbol:
// ?generateSculkReplaceableBlocksWorldgen@SculkUtils@@YA?BV?$set@PEBVBlock@@U?$less@PEBVBlock@@@std@@V?$allocator@PEBVBlock@@@3@@std@@XZ
MCAPI std::set<class Block const*> const generateSculkReplaceableBlocksWorldgen();

// symbol: ?isSculkOrSculkVein@SculkUtils@@YA_NAEBVBlock@@@Z
MCAPI bool isSculkOrSculkVein(class Block const& block);
// NOLINTEND

}; // namespace SculkUtils
