/*
5
54
543
5432
54321
*/
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int i, j;
    int n = 5;
    for (i = n; i >= 1; i--)
    {
        for (j = n; j >= i; j--)
        {
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}
