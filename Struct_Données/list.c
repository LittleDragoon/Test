#include <stdio.h>
#include <stdlib.h>
#include "list.h"

List *insert(Date *date, List *list)
{
    List *res = malloc(sizeof(List));
    res->value = date;
    res->next = list;
    return res;
}

void print_list(List *list)
{

    while (list != NULL)
    {
        print_date(list->value);
        list = list->next;
    }
}