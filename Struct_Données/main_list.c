#include <stdio.h>
#include <stdlib.h>
#include "date.h"
#include "list.h"

void main()
{

    Date *d = create_date(10, 2, 2000);
    Date *p = create_date(11, 2, 2000);

    List *empty = NULL;
    //print_list(list);
    List *list = insert(d, empty);

    // print_list(list);

    list = insert(p, list);
    print_list(list);
}
