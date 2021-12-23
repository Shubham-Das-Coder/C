/*
AFKPU
BGLQV
CHMRW
DINSX
EJOTY
*/
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int i, j, x;
    int n = 5;
    for (i = 0; i < n; i++)
    {
        x = i;
        for (j = 1; j <= n; j++)
        {
            x = x + 5;
            printf("%c", x - 5 + 65);
        }
        printf("\n");
    }
    return 0;
}
