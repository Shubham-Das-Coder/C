#include <stdio.h>
void main()
{
    int a[100], n, i, val, p;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    printf("Enter %d element in the array\n", n);
    for (i = 0; i < n; i++)
    {
        printf("%d - ", i + 1);
        scanf("%d", &a[i]);
    }
    printf("Enter the number to be inserted: ");
    scanf("%d", &val);
    printf("Enter the position where you want to insert %d: ", val);
    scanf("%d", &p);
    for (i = n - 1; i >= p - 1; i--)
        a[i + 1] = a[i];
    a[p - 1] = val;
    n++;
    printf("The new array after inserting %d at %d position is:", val, p);
    for (i = 0; i < n; i++)
        printf("\n%d - %d", i, a[i]);
}