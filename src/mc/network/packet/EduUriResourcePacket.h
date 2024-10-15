#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/options/EduSharedUriResource.h"

// auto generated inclusion list
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"
#include "mc/platform/Result.h"

class EduUriResourcePacket : public ::Packet {
public:
    EduSharedUriResource mEduSharedUriResource; // this+0x30

    // prevent constructor by default
    EduUriResourcePacket& operator=(EduUriResourcePacket const&);
    EduUriResourcePacket(EduUriResourcePacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~EduUriResourcePacket();

    // vIndex: 1
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2
    virtual std::string getName() const;

    // vIndex: 4
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    MCAPI EduUriResourcePacket();

    MCAPI explicit EduUriResourcePacket(struct EduSharedUriResource const& settings);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void* ctor$(struct EduSharedUriResource const& settings);

    MCAPI void* ctor$();

    MCAPI void dtor$();

    MCAPI class Bedrock::Result<void> _read$(class ReadOnlyBinaryStream& stream);

    MCAPI ::MinecraftPacketIds getId$() const;

    MCAPI std::string getName$() const;

    MCAPI void write$(class BinaryStream& stream) const;

    // NOLINTEND
};
