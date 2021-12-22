/*
  2  4  6  8 10
 12 14 16 18 20
 22 24 26 28 30
 32 34 36 38 40
 42 44 46 48 50
*/
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int i, j, x = 2;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 5; j++)
        {
            printf("%3d", x);
            x = x + 2;
        }
        printf("\n");
    }
    return 0;
}
