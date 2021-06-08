#include <stdio.h>
#include <stdlib.h>
#include <Exo1.h>

Date *create_date(int day, int month, int year)
{

    Date *res = malloc(sizeof(Date));
    res->jour = day;
    res->mois = month;
    res->annees = year;
    return res;
}

void print_date(Date *date)
{

    printf("Le jour est %d, le mois est %d, l'année est %d\n", date->jour, date->mois, date->annees);
}
