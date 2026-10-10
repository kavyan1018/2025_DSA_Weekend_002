#include <stdio.h>

void merge(int arr[], int left, int mid, int right)
{

    int temp[100];
    int i = left;
    int j = mid + 1;
    int k = 0;

    while (i <= mid && j <= right)
    {
        if (arr[i] <= arr[j])
        {
            temp[k++] = arr[i++]; // ++ -> 1 + 1 temp[2]
        }
        else
        {
            temp[k++] = arr[j++];
        }

        while (i <= mid)
        {
            temp[k++] = arr[i++];
        }

        while (j <= right)
        {
            temp[k++] = arr[j++];
        }

        // shift the values on original array
        for (i = left, k = 0; i <= right; i++, k++)
        {
            arr[i] = temp[k];
        }
    }
}

void mergeSort(int arr[], int left, int right)
{
    // mid

    if (left < right)
    {
        int mid = (left + right) / 2;

        // left
        mergeSort(arr, left, mid);

        // right
        mergeSort(arr, mid + 1, right);
        
        // merge
        merge(arr, left, mid, right);
    }
}

int main()
{

    int arr[] = {37, 28, 43, 10, 52};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original Array :");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    mergeSort(arr, 0, n - 1);

    printf("\nSorted Array :");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}