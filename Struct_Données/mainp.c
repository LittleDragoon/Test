#include <stdio.h>
#include <stdlib.h>
#include "date.h"
#include "person.h"

void main()
{
    char prenom[] = "B";
    char nom[] = "Z";
    int jour = 10;
    int mois = 2;
    int annee = 2000;
    Person *person = create_person(prenom, nom, jour, mois, annee);

    print_person(person);
}