/*
  1  6 11 16 21
  2  7 12 17 22
  3  8 13 18 23
  4  9 14 19 24
  5 10 15 20 25
*/
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int i, j, x, n = 5;
    for (i = 1; i <= n; i++)
    {
        x = i;
        for (j = 1; j <= n; j++)
        {
            printf("%3d", x);
            x = x + n;
        }
        printf("\n");
    }
    return 0;
}
