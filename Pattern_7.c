/*
  1  3  5  7  9
 11 13 15 17 19
 21 23 25 27 29
 31 33 35 37 39
 41 43 45 47 49
*/
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int i, j, x = 1;
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
