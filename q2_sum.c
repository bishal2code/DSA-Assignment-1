#include <stdio.h>
void main()
{
    int arr[5], i, sum = 0;
    printf("Name: Bishal Dhakal\n");
    printf("Enter 5 elements:\n");
    for(i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }
    for(i = 0; i < 5; i++)
    {
        sum += arr[i];
    }
    printf("Sum = %d", sum);
}