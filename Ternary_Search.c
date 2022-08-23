#include <stdio.h>

int ternarySearch(int l, int r, int key, int arr[])
{
    if (r >= l)
    {
        int mid1 = l + (r - l) / 3;
        int mid2 = r - (r - l) / 3;
        if (arr[mid1] == key)
            return mid1;
        if (arr[mid2] == key)
            return mid2;
        if (key < arr[mid1])
            return ternarySearch(1, mid1 - 1, key, arr);
        else if (key > arr[mid2])
            return ternarySearch(mid2 + 1, r, key, arr);
        else
            return ternarySearch(mid1 + 1, mid2 - 1, key, arr);
    }
    return -1;
}

int main()
{
    int arr[100], l = 0, r, i, key, result;
    printf("Enter the number of elements: ");
    scanf("%d", &r);
    printf("Enter the elements:\n");
    for (i = 0; i < r; i++)
        scanf("%d", &arr[i]);
    printf("Enter the element to search: ");
    scanf("%d", &key);
    result = ternarySearch(0, r - 1, key, arr);
    (result == -1)
        ? printf("%d is not found in the array", key)
        : printf("%d is found at index %d and position %d", key, result, result + 1);
}