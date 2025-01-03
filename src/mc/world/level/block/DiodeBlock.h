#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/BlockLegacy.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Block;
class BlockPos;
class BlockSource;
// clang-format on

class DiodeBlock : public ::BlockLegacy {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool> mOn;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 79
    virtual bool mayPlace(::BlockSource& region, ::BlockPos const& pos) const /*override*/;

    // vIndex: 142
    virtual bool canSurvive(::BlockSource& region, ::BlockPos const& pos) const /*override*/;

    // vIndex: 61
    virtual void onRedstoneUpdate(::BlockSource& region, ::BlockPos const& pos, int strength, bool isFirstTime) const
        /*override*/;

    // vIndex: 118
    virtual int getVariant(::Block const& block) const /*override*/;

    // vIndex: 52
    virtual int getDirectSignal(::BlockSource& region, ::BlockPos const& pos, int dir) const /*override*/;

    // vIndex: 151
    virtual int getSignal(::BlockSource& region, ::BlockPos const& pos, int dir) const;

    // vIndex: 44
    virtual bool isSignalSource() const /*override*/;

    // vIndex: 152
    virtual bool isLocked(::BlockSource& region, ::BlockPos const& pos) const;

    // vIndex: 153
    virtual bool isSameDiode(::Block const& block) const;

    // vIndex: 154
    virtual bool shouldPrioritize(::BlockSource& region, ::BlockPos const& pos) const;

    // vIndex: 119
    virtual bool canSpawnOn(::Actor*) const /*override*/;

    // vIndex: 155
    virtual bool isOn() const;

    // vIndex: 156
    virtual bool shouldTurnOn(::BlockSource& region, ::BlockPos const& pos) const;

    // vIndex: 157
    virtual int getInputSignal(::BlockSource& region, ::BlockPos const& pos) const;

    // vIndex: 158
    virtual bool isAlternateInput(::Block const& block) const;

    // vIndex: 159
    virtual int getAlternateSignal(::BlockSource& region, ::BlockPos const& pos) const;

    // vIndex: 160
    virtual int getOutputSignal(::Block const& block) const;

    // vIndex: 161
    virtual int getTurnOffDelay(::Block const& block) const;

    // vIndex: 162
    virtual int getTurnOnDelay(::Block const&) const = 0;

    // vIndex: 163
    virtual ::Block const* getOnBlock(::Block const*) const = 0;

    // vIndex: 164
    virtual ::Block const* getOffBlock(::Block const*) const = 0;

    // vIndex: 0
    virtual ~DiodeBlock() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI DiodeBlock(::std::string const& nameId, int id, bool on);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static bool isDiode(::Block const& block);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::string const& nameId, int id, bool on);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $mayPlace(::BlockSource& region, ::BlockPos const& pos) const;

    MCAPI bool $canSurvive(::BlockSource& region, ::BlockPos const& pos) const;

    MCAPI void $onRedstoneUpdate(::BlockSource& region, ::BlockPos const& pos, int strength, bool isFirstTime) const;

    MCAPI int $getVariant(::Block const& block) const;

    MCAPI int $getDirectSignal(::BlockSource& region, ::BlockPos const& pos, int dir) const;

    MCAPI int $getSignal(::BlockSource& region, ::BlockPos const& pos, int dir) const;

    MCAPI bool $isSignalSource() const;

    MCAPI bool $isLocked(::BlockSource& region, ::BlockPos const& pos) const;

    MCAPI bool $isSameDiode(::Block const& block) const;

    MCAPI bool $shouldPrioritize(::BlockSource& region, ::BlockPos const& pos) const;

    MCAPI bool $canSpawnOn(::Actor*) const;

    MCAPI bool $isOn() const;

    MCAPI bool $shouldTurnOn(::BlockSource& region, ::BlockPos const& pos) const;

    MCAPI int $getInputSignal(::BlockSource& region, ::BlockPos const& pos) const;

    MCAPI bool $isAlternateInput(::Block const& block) const;

    MCAPI int $getAlternateSignal(::BlockSource& region, ::BlockPos const& pos) const;

    MCAPI int $getOutputSignal(::Block const& block) const;

    MCAPI int $getTurnOffDelay(::Block const& block) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
