#include <stdio.h>

int main()
{

    int arr[5] = {12, 40, 60, 30, 40};
    int search, i, found = 0;

    printf("Enter the number to search: ");
    scanf("%d", &search);

    // Linear Search

    for (i = 0; i < 5; i++)
    {
        if(arr[i] == search){
            found = 1;
            break;
        }
    }

    if(found){
        printf("Number %d found at index %d\n", search, i+1);
    }
    else{
        printf("Not found\n");
    }

}