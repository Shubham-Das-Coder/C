#include <stdio.h>

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

void selectionSort(int arr[], int n)
{
    int i, j, min_idx;
    for (i = 0; i < n - 1; i++)
    {
        min_idx = i;
        for (j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min_idx])
                min_idx = j;
            if (min_idx != i)
                swap(&arr[min_idx], &arr[i]);
        }
    }
}

void printArray(int arr[], int size)
{
    int i;
    printf("The array in ascending order is:\n");
    for (i = 0; i < size; i++)
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
    selectionSort(arr, n);
    printArray(arr, n);
    return 0;
}