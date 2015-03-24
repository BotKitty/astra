#ifndef COLOR_TYPES_H
#define COLOR_TYPES_H

#include "../sensekit_types.h"

typedef struct _sensekit_colorframe {
    sensekit_frame_ref_t* frameRef;
    uint32_t frameIndex;
    uint32_t width;
    uint32_t height;
    uint8_t bpp;
    int8_t* data;
} sensekit_colorframe_t;

// https://gcc.gnu.org/onlinedocs/gcc/Zero-Length.html
typedef struct _sensekit_colorframe_wrapper {
    sensekit_colorframe_t frame;
    char frame_data[];
} sensekit_colorframe_wrapper_t;

typedef struct _sensekit_colorstream sensekit_colorstream_t;

#endif // COLOR_TYPES_H