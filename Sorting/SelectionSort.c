#include <stdio.h>

int main()
{

    int arr[] = {64, 25, 12, 22, 11};
    int n = 5;
    int min, temp, i, j;

    for (i = 0; i < n - 1; i++)
    {
        min = i;

        for (j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
        }
        
        // swap
        temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }

    // print 
    printf("Sorted Array :) \n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    
}