#include <stdio.h>

int main()
{

    int arr[] = {10, 20, 30, 40, 50, 60};
    int n = sizeof(arr) / sizeof(arr[0]);
    int ser;

    printf("Enter the Numebr to search in array :");
    scanf("%d", &ser);

    int low = 0;
    int high = n - 1;
    int mid;
    int found = 0;

    // loop
    while (low <= high) // low = 0 <= high n - 1
    {

        mid = (low + high) / 2;

        if (arr[mid] == ser)
        {
            printf("Element Found at index %d", mid);
            found = 1;
            break;
        }
        else if (ser > arr[mid])
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    if (found == 0)
    {
        printf("\nElement not Found !");
    }
    return 0;
}