#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/optional_ref.h"
#include "mc/enums/FertilizerType.h"
#include "mc/enums/Flip.h"
#include "mc/enums/ShapeType.h"
#include "mc/world/Direction.h"
#include "mc/world/level/block/BlockLegacy.h"
#include "mc/world/level/block/utils/BlockProperty.h"
#include "mc/world/level/block/utils/BlockRenderLayer.h"
#include "mc/world/level/block/utils/BlockSupportType.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class RootedDirtBlock : public ::BlockLegacy {
public:
    // prevent constructor by default
    RootedDirtBlock& operator=(RootedDirtBlock const&);
    RootedDirtBlock(RootedDirtBlock const&);
    RootedDirtBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1RootedDirtBlock@@UEAA@XZ
    virtual ~RootedDirtBlock() = default;

    // vIndex: 47, symbol: ?canBeOriginalSurface@RootedDirtBlock@@UEBA_NXZ
    virtual bool canBeOriginalSurface() const;

    // vIndex: 79, symbol:
    // ?onFertilized@RootedDirtBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@PEAVActor@@W4FertilizerType@@@Z
    virtual bool
    onFertilized(class BlockSource& region, class BlockPos const& pos, class Actor* entity, ::FertilizerType fType)
        const;

    // vIndex: 81, symbol: ?canBeFertilized@RootedDirtBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@@Z
    virtual bool
    canBeFertilized(class BlockSource& region, class BlockPos const& pos, class Block const& aboveBlock) const;

    // vIndex: 88, symbol: ?tryToTill@RootedDirtBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@AEAVActor@@AEAVItemStack@@@Z
    virtual bool
    tryToTill(class BlockSource& region, class BlockPos const& pos, class Actor& entity, class ItemStack& item) const;

    // vIndex: 154, symbol: ?use@RootedDirtBlock@@UEBA_NAEAVPlayer@@AEBVBlockPos@@E@Z
    virtual bool use(class Player& player, class BlockPos const& pos, uchar face) const;

    // symbol: ??0RootedDirtBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
    MCAPI RootedDirtBlock(std::string const& nameId, int id);

    // NOLINTEND
};
