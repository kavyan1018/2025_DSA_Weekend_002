#include <stdio.h>

int main()
{

    int arr[5] = {5, 3, 8, 1, 2};
    int i, j, temp;

    printf("UnSorted Array :");
    for (i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }

    // bubble sort
    for (i = 0; i < 5 - 1; i++) // 5 3 /// 58 /// 8 1 /// 8 2
    {
        for (j = 0; j < 5 - 1 - i; j++)
        {
            // check
            if (arr[j] > arr[j + 1])
            {
                // swap
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    printf("\nSorted Array :");
    for (i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
}