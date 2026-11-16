#include <stdio.h>
void main()
{
    int arr[5], i, even = 0, odd = 0;
    printf("Name: Bishal Dhakal\n");
    printf("Enter 5 elements:\n");
    for(i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }
    for(i = 0; i < 5; i++)
    {
        if(arr[i] % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    printf("Number of even elements = %d\n", even);
    printf("Number of odd elements = %d", odd);
}