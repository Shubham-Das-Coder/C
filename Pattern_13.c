/*
  1 10 11 20 21
  2  9 12 19 22
  3  8 13 18 23
  4  7 14 17 24
  5  6 15 16 25
*/
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int i, j, x, y, n = 5;
    for (i = 1; i <= n; i++)
    {
        x = i;
        y = n - i + 1;
        for (j = 1; j <= n; j++)
        {
            if (j % 2 == 1)
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
