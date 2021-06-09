#include <stdio.h>
#include <stdlib.h>
#include "date.h"

int main()
{
    Date *d = create_date(8, 6, 2021);

    print_date(d);
}