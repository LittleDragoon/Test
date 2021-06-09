#include <stdio.h>

int addone(int x)
{
    return x + 1;
}

int main()
{
    printf("addone(5) = %d\n", addone(5));
}

// OU une autre version : parce que le langage C lit de haut en bas

int addone(int x); //DECLARATION

int main()
{
    printf("addone(5) = %d\n", addone(5)); // UTILISATION
}

int addone(int x)
{ //DEFINITION
    return x + 1;
}

// OU la bonne version : parce que le langage C lit de haut en bas

#include "TD1_exo3.h"

int main()
{
    printf("addone(5) = %d\n", addone(5)); // UTILISATION
}

int addone(int x)
{ //DEFINITION
    return x + 1;
}