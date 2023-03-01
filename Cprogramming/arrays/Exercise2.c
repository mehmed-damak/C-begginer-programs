#include <stdio.h>


int main()
{
    int arr[10];
    int size, i, toSearch, found;
    printf("Enter elements in array:\n ");
    for(i=0; i<10; i++)
    {
        printf("element %d\n", i);
        scanf("%d", &arr[i]);
    }

    printf("\nEnter element to search: ");
    scanf("%d", &toSearch);
    found = 0;   
    for(i=0; i<10; i++)
    {
        if(arr[i] == toSearch)
        {
            found = 1;
            break;
        }
    }
    if(found==1)
    {
        printf("\n%d is found at position %d", toSearch, i + 1);
    }
    else
    {
        printf("\n%d is not found in the array", toSearch);
    }
    return 0;
}















//#define MAX_SIZE 100   Maximum array size
//    printf("Enter size of array: ");
//    scanf("%d", &size);