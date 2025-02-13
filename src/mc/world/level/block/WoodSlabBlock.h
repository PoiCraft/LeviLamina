#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/WeakPtr.h"
#include "mc/common/wrapper/optional_ref.h"
#include "mc/enums/FertilizerType.h"
#include "mc/enums/Flip.h"
#include "mc/enums/ShapeType.h"
#include "mc/world/Direction.h"
#include "mc/world/level/block/SlabBlock.h"
#include "mc/world/level/block/utils/BlockProperty.h"
#include "mc/world/level/block/utils/BlockRenderLayer.h"
#include "mc/world/level/block/utils/BlockSupportType.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class WoodSlabBlock : public ::SlabBlock {
public:
    // prevent constructor by default
    WoodSlabBlock& operator=(WoodSlabBlock const&);
    WoodSlabBlock(WoodSlabBlock const&);
    WoodSlabBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1WoodSlabBlock@@UEAA@XZ
    virtual ~WoodSlabBlock() = default;

    // vIndex: 49, symbol: ?isValidAuxValue@WoodSlabBlock@@UEBA_NH@Z
    virtual bool isValidAuxValue(int auxValue) const;

    // vIndex: 96, symbol: ?asItemInstance@WoodSlabBlock@@UEBA?AVItemInstance@@AEBVBlock@@PEBVBlockActor@@@Z
    virtual class ItemInstance asItemInstance(class Block const& block, class BlockActor const*) const;

    // vIndex: 119, symbol:
    // ?buildDescriptionId@WoodSlabBlock@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVBlock@@@Z
    virtual std::string buildDescriptionId(class Block const&) const;

    // vIndex: 120, symbol: ?isAuxValueRelevantForPicking@WoodSlabBlock@@UEBA_NXZ
    virtual bool isAuxValueRelevantForPicking() const;

    // vIndex: 129, symbol: ?getVariant@WoodSlabBlock@@UEBAHAEBVBlock@@@Z
    virtual int getVariant(class Block const& block) const;

    // vIndex: 162, symbol: ?getMapColor@WoodSlabBlock@@UEBA?AVColor@mce@@AEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@@Z
    virtual class mce::Color getMapColor(class BlockSource&, class BlockPos const&, class Block const& block) const;

    // vIndex: 163, symbol: ?getResourceItem@WoodSlabBlock@@UEBA?AVItemInstance@@AEAVRandomize@@AEBVBlock@@H@Z
    virtual class ItemInstance getResourceItem(class Randomize&, class Block const& block, int) const;

    // vIndex: 165, symbol: ?getSilkTouchItemInstance@WoodSlabBlock@@UEBA?AVItemInstance@@AEBVBlock@@@Z
    virtual class ItemInstance getSilkTouchItemInstance(class Block const& block) const;

    // symbol:
    // ??0WoodSlabBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H_NV?$WeakPtr@VBlockLegacy@@@@@Z
    MCAPI WoodSlabBlock(std::string const& nameId, int id, bool fullSize, class WeakPtr<class BlockLegacy> baseSlab);

    // NOLINTEND
};
