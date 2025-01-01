#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class CompoundTag;
class Dimension;
class ServerLevel;
// clang-format on

class IRequestAction {
public:
    // IRequestAction inner types define
    enum class RequestActionType : uchar {
        FunctionAction           = 0,
        TestAction               = 1,
        StructureAnimationAction = 2,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::IRequestAction::RequestActionType> mActionType;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~IRequestAction();

    // vIndex: 1
    virtual void execute(::ServerLevel&, ::Dimension&) = 0;

    // vIndex: 2
    virtual void serialize(::CompoundTag& tag);

    // vIndex: 3
    virtual bool operator==(::IRequestAction const& action) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit IRequestAction(::IRequestAction::RequestActionType const& actionType);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static bool isValidTag(::CompoundTag const& tag);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::IRequestAction::RequestActionType const& actionType);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $serialize(::CompoundTag& tag);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
