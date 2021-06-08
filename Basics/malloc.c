#include <stdlib.h>
#include <stdio.h>

void Copie(char chaine[], char *s);

int main()
{
    // Le +1 c'est pour le dernier char '\0'
    char *p = malloc((5 + 1) * sizeof(char));
    char chaine[] = "bloup";
    Copie(chaine, p);
    printf("%s\n", p);
}

void Copie(char chaine[], char *s)
{
    int position = 0;
    while (chaine[position] != '\0')
    {
        *s = chaine[position];
        s = s + 1;
        position++;
    }
    *s = '\0';
}
