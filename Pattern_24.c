/*
 0 1 0 1 0
 0 1 0 1 0
 0 1 0 1 0
 0 1 0 1 0
 0 1 0 1 0
*/
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int i, j;
    int n = 5;
    for (i = 1; i <= n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%2d", j % 2);
        }
        printf("\n");
    }
    return 0;
}
