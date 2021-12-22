/*
  1  2  3  4  5
  2  3  4  5  6
  3  4  5  6  7
  4  5  6  7  8
  5  6  7  8  9
*/
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int i, j;
    int n = 5;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            printf("%3d", i + j - 1);
        }
        printf("\n");
    }
    return 0;
}
