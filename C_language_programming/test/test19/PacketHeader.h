#ifndef __PacketHeader_H__
#define __PacketHeader_H__

typedef struct
{
    unsigned int version: 2;
    unsigned int headerLength: 4;
    unsigned int totalLength: 16;
    unsigned int checksum: 16;
} PacketHeader;

#endif