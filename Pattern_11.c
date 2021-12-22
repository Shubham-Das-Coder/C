/*
111213
212223
313233
414243
515253
*/
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int i, j;
    for (i = 0; i <= 5; i++)
    {
        for (j = 1; j <= 3; j++)
        {
            printf("%d%d", i, j);
        }
        printf("\n");
    }
    return 0;
}
