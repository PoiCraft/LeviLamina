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

class StoneSlabBlock4 : public ::SlabBlock {
public:
    // prevent constructor by default
    StoneSlabBlock4& operator=(StoneSlabBlock4 const&);
    StoneSlabBlock4(StoneSlabBlock4 const&);
    StoneSlabBlock4();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1StoneSlabBlock4@@UEAA@XZ
    virtual ~StoneSlabBlock4() = default;

    // vIndex: 49, symbol: ?isValidAuxValue@StoneSlabBlock4@@UEBA_NH@Z
    virtual bool isValidAuxValue(int auxValue) const;

    // vIndex: 96, symbol: ?asItemInstance@StoneSlabBlock4@@UEBA?AVItemInstance@@AEBVBlock@@PEBVBlockActor@@@Z
    virtual class ItemInstance asItemInstance(class Block const& block, class BlockActor const*) const;

    // vIndex: 119, symbol:
    // ?buildDescriptionId@StoneSlabBlock4@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVBlock@@@Z
    virtual std::string buildDescriptionId(class Block const&) const;

    // vIndex: 120, symbol: ?isAuxValueRelevantForPicking@StoneSlabBlock4@@UEBA_NXZ
    virtual bool isAuxValueRelevantForPicking() const;

    // vIndex: 129, symbol: ?getVariant@StoneSlabBlock4@@UEBAHAEBVBlock@@@Z
    virtual int getVariant(class Block const& block) const;

    // vIndex: 162, symbol: ?getMapColor@StoneSlabBlock4@@UEBA?AVColor@mce@@AEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@@Z
    virtual class mce::Color getMapColor(class BlockSource&, class BlockPos const&, class Block const& block) const;

    // vIndex: 163, symbol: ?getResourceItem@StoneSlabBlock4@@UEBA?AVItemInstance@@AEAVRandomize@@AEBVBlock@@H@Z
    virtual class ItemInstance getResourceItem(class Randomize&, class Block const& block, int) const;

    // vIndex: 165, symbol: ?getSilkTouchItemInstance@StoneSlabBlock4@@UEBA?AVItemInstance@@AEBVBlock@@@Z
    virtual class ItemInstance getSilkTouchItemInstance(class Block const& block) const;

    // symbol:
    // ??0StoneSlabBlock4@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H_NV?$WeakPtr@VBlockLegacy@@@@@Z
    MCAPI StoneSlabBlock4(std::string const& nameId, int id, bool fullSize, class WeakPtr<class BlockLegacy> baseSlab);

    // symbol:
    // ?SLAB_NAMES@StoneSlabBlock4@@2V?$array@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@$04@std@@B
    MCAPI static std::array<std::string, 5> const SLAB_NAMES;

    // NOLINTEND
};
