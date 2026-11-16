#include <stdio.h>
void main()
{
    int arr[5], i, largest;
    printf("Name: Bishal Dhakal\n");
    printf("Enter 5 elements:\n");
    for(i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }
    largest = arr[0];
    for(i = 1; i < 5; i++)
    {
        if(arr[i] > largest)
        {
            largest = arr[i];
        }
    }
    printf("Largest element = %d", largest);
}