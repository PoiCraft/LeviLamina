#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/Direction.h"
#include "mc/world/level/block/actor/BlockActor.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BlockActorDataPacket;
class BlockPos;
class BlockSource;
class CompoundTag;
class DataLoadHelper;
class Level;
class SaveContext;
// clang-format on

class BellBlockActor : public ::BlockActor {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>              mRinging;
    ::ll::TypedStorage<1, 1, ::Direction::Type> mMovementDirection;
    ::ll::TypedStorage<1, 1, bool>              mPowered;
    ::ll::TypedStorage<4, 4, int>               mAlarmCooldown;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 7
    virtual void tick(::BlockSource& region) /*override*/;

    // vIndex: 2
    virtual bool save(::CompoundTag& tag, ::SaveContext const& saveContext) const /*override*/;

    // vIndex: 1
    virtual void load(::Level& level, ::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper) /*override*/;

    // vIndex: 43
    virtual ::std::unique_ptr<::BlockActorDataPacket> _getUpdatePacket(::BlockSource&) /*override*/;

    // vIndex: 44
    virtual void _onUpdatePacket(::CompoundTag const& data, ::BlockSource& region) /*override*/;

    // vIndex: 0
    virtual ~BellBlockActor() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit BellBlockActor(::BlockPos const& pos);

    MCAPI void ejectItem(::BlockPos const& pos, ::Actor& actor) const;

    MCAPI bool isRinging() const;

    MCAPI bool ring(::Direction::Type direction, ::BlockSource& region, ::Actor* sourceActor, bool alarmNearbyDwellers);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::BlockPos const& pos);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $tick(::BlockSource& region);

    MCAPI bool $save(::CompoundTag& tag, ::SaveContext const& saveContext) const;

    MCAPI void $load(::Level& level, ::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper);

    MCAPI ::std::unique_ptr<::BlockActorDataPacket> $_getUpdatePacket(::BlockSource&);

    MCAPI void $_onUpdatePacket(::CompoundTag const& data, ::BlockSource& region);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
