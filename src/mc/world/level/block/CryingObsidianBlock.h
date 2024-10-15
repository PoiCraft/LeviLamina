#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/optional_ref.h"
#include "mc/world/Direction.h"
#include "mc/world/Flip.h"
#include "mc/world/item/FertilizerType.h"
#include "mc/world/level/ShapeType.h"
#include "mc/world/level/block/BlockLegacy.h"
#include "mc/world/level/block/BlockProperty.h"
#include "mc/world/level/block/BlockRenderLayer.h"
#include "mc/world/level/block/BlockSupportType.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class CryingObsidianBlock : public ::BlockLegacy {
public:
    // prevent constructor by default
    CryingObsidianBlock& operator=(CryingObsidianBlock const&);
    CryingObsidianBlock(CryingObsidianBlock const&);
    CryingObsidianBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~CryingObsidianBlock() = default;

    // vIndex: 134
    virtual void
    animateTickBedrockLegacy(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    MCAPI CryingObsidianBlock(std::string const& nameId, int id);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void* ctor$(std::string const& nameId, int id);

    MCAPI void
    animateTickBedrockLegacy$(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    // NOLINTEND
};
