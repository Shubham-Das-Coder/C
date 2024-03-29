#include <stdio.h>

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

void bubbleSort(int arr[], int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
            if (arr[j] < arr[j + 1])
                swap(&arr[j], &arr[j + 1]);
    }
}

void printArray(int arr[], int size)
{
    int i;
    printf("The array in descending order is:\n");
    for (i = 0; i < size; i++)
        printf("%d\t", arr[i]);
}

int main()
{
    int arr[100], n, i, j;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter the elements:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    bubbleSort(arr, n);
    printArray(arr, n);
    return 0;
}