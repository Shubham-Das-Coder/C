/*
  5  6 15 16 25
  4  7 14 17 24
  3  8 13 18 23
  2  9 12 19 22
  1 10 11 20 21
*/
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n = 5;
    int i, j;
    int x, y;
    for (i = 1; i <= n; i++)
    {
        x = i;
        y = n - i + 1;
        for (j = 1; j <= n; j++)
        {
            if (j % 2 == 0)
            {
                printf("%3d", x);
            }
            else
            {
                printf("%3d", y);
            }
            x = x + n;
            y = y + n;
        }
        printf("\n");
    }
    return 0;
}
