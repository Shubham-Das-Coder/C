#include <stdio.h>

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

void recursiveBubbleSort(int arr[], int n)
{
    if (n == 1)
        return;
    int count = 0;
    for (int i = 0; i < n - 1; i++)
        if (arr[i] > arr[i + 1])
        {
            swap(&arr[i], &arr[i + 1]);
            count++;
        }
    if (count == 0)
        return;
    recursiveBubbleSort(arr, n - 1);
}

void printArray(int arr[], int n)
{
    int i;
    printf("The array in ascending order is:\n");
    for (i = 0; i < n; i++)
        printf("%d\t", arr[i]);
}

int main()
{
    int arr[100], n, i;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter the elements:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    recursiveBubbleSort(arr, n);
    printArray(arr, n);
    return 0;
}