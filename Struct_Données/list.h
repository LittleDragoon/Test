#ifndef LIST
#define LIST
#include "date.h"

typedef struct _List
{

    Date *value;
    // Truc "récursif"
    struct _List *next;

} List;

#endif
