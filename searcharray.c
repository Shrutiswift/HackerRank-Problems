#include<stdio.h>
int main()
{
    int arr[MAX_SIZE];
    int size, i, Search, found;
    printf("Enter size of array: ");
    scanf("%d", &size);

    printf("Enter elements in arrays: ");
    for(i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter element to search: ");
    scanf("%d", &Search);
    found = 0;
    for(i = 0; i < size; i++)
    {
        if(arr[i]==Search)
        {
            found = 1;
            break;
        }
    }
    if (found == 1)
    {
        printf("%d is found at position %d", Search, i+1);
    }
    else
    {
        printf("%d is not found in the array", Search);
    }
}