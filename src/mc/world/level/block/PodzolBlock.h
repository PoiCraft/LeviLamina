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

class PodzolBlock : public ::BlockLegacy {
public:
    // prevent constructor by default
    PodzolBlock& operator=(PodzolBlock const&);
    PodzolBlock(PodzolBlock const&);
    PodzolBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1PodzolBlock@@UEAA@XZ
    virtual ~PodzolBlock() = default;

    // vIndex: 163, symbol: ?getResourceItem@PodzolBlock@@UEBA?AVItemInstance@@AEAVRandomize@@AEBVBlock@@H@Z
    virtual class ItemInstance getResourceItem(class Randomize&, class Block const&, int) const;

    // symbol: ??0PodzolBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
    MCAPI PodzolBlock(std::string const& nameId, int id);

    // NOLINTEND
};
