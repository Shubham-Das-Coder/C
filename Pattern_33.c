/*
EJOTY
DINSX
CHMRW
BGLQV
AFKPU
*/
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int i, j, x;
    int n = 5;
    for (i = 1; i <= n; i++)
    {
        x = 5 - i;
        for (j = 1; j <= n; j++)
        {
            printf("%c", x + 65);
            x = x + 5;
        }
        printf("\n");
    }
    return 0;
}
