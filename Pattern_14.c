/*
  5 10 15 20 25
  4  9 14 19 24
  3  8 13 18 23
  2  7 12 17 22
  1  6 11 16 21
*/
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n = 5;
    int i, j;
    int x;
    for (i = 1; i <= n; i++)
    {
        x = n - i + 1;
        for (j = 1; j <= n; j++)
        {
            printf("%3d", x);
            x = x + n;
        }
        printf("\n");
    }
    return 0;
}
