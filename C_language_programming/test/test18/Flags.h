#ifndef __Flags_H__
#define __Flags_H__

typedef struct
{
    unsigned int read: 1;
    unsigned int write: 1;
    unsigned int execute: 1;
    unsigned int reserved: 5;
} Flags;

#endif