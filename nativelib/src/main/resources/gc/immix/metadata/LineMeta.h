#ifndef IMMIX_LINEMETA_H
#define IMMIX_LINEMETA_H

#include <stdint.h>
#include <stdbool.h>

typedef struct {
    int8_t next;
    uint8_t size;
} FreeLineMeta;

typedef enum {
    line_empty = 0x0,
    line_marked = 0x1,
} LineFlag;

typedef uint8_t LineMeta;

static inline bool Line_IsMarked(LineMeta *lineMeta) {
    return *lineMeta == line_marked;
}
static inline void Line_Mark(LineMeta *lineMeta) { *lineMeta = line_marked; }
static inline void Line_Unmark(LineMeta *lineMeta) { *lineMeta = line_empty; }

#endif // IMMIX_LINEMETA_H
