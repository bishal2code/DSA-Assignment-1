#include <stdio.h>
void main()
{
    int arr[5], i;
    printf("Name: Bishal Dhakal\n");
    printf("Enter 5 elements:\n");
    for(i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("The elements are:\n");
    for(i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
}