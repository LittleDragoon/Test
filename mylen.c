#include <stdio.h>

int mylen(char *s)
{
    int res = 0;
    while (*(s++))
    {
        /// Ici, implicitement la boucle s'arrête quand on atteint le '\0'
        res++;
    }
    return res;
}

int main()
{
    char *s = "abc";
    printf("%d", mylen(s));
}