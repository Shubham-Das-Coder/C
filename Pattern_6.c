/*
  1  2  3  4  5
  6  7  8  9 10
 11 12 13 14 15
 16 17 18 19 20
 21 22 23 24 25
 */
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n = 5, k = 1, i, j;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 5; j++)
        {
            printf("%3d", k++);
        }
        printf("\n");
    }
    return 0;
}
