#include <stdio.h>

void Somme(int t1[], int t2[], int length, int res[])
{
    for (int i = 0; i < length; i++)
    {
        res[i] = t1[i] + t2[i];
    }
}

int main()
{
    int length = 3;
    int res[length];
    int t1[3] = {1, 2, 3};
    int t2[3] = {4, 5, 6};

    Somme(t1, t2, length, res);
    for (int i = 0; i < length; i++)
    {
        printf("res[i] = %d\n", res[i]);
    }
}
