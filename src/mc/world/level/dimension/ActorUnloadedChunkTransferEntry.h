#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ChunkKey;
class CompoundTag;
// clang-format on

struct ActorUnloadedChunkTransferEntry {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 12, ::ChunkKey>                      mFromChunkKey;
    ::ll::TypedStorage<8, 32, ::std::string>                   mActorStorageKey;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::CompoundTag>> mActorTag;
    // NOLINTEND
};
