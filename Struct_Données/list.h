#ifndef LIST
#define LIST
#include "date.h"

typedef struct _List
{

    Date *value;
    // Truc "récursif"
    struct _List *next;

} List;

List *create_list();
List *insert(Date *date, List *list);
void print_list(List *list);

#endif
