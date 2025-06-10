#include <stdio.h>
#include "PacketHeader.h"

int main(void)
{
    PacketHeader packetheader = {.version = 1, .headerLength = 5, .totalLength = 1024, };
    printf("version = %u\n", packetheader.version);
    printf("headerLength = %u\n", packetheader.headerLength);
    printf("totalLength = %u\n", packetheader.totalLength);
    printf("checksum = %u\n", packetheader.checksum);
    return 0;
}