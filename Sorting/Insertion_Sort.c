#include <stdio.h>

int main()
{
    int arr[] = {6, 8, 3, 7, 2, 5, 4};
    int i, j, key;
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Before Sort Array :\n");
    for (i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    // sort

    for (i = 0; i < size; i++)
    {
        key = arr[i];
        j = i - 1; // i = 0      // j  = 0 - 1

        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }

    printf("\nSorted Array :\n");
    for (i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}