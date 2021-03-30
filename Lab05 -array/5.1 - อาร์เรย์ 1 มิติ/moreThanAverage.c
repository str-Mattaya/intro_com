#include <stdio.h>

int main()
{
    float mean = 0;
    int arr[10] = {0};
    int count = 0;

    int i=0;

    printf("Enter 10 numbers: ");
    while(i<10)
    {
        scanf(" %d", &arr[i]);
        mean += arr[i];
        i++;
    }
    mean /= 10.0;

    printf("\nAverage = %.2f\n> ", mean);
    i=0;
    while(i<10)
    {
        if(arr[i] > mean)
        {
            printf("%d ", arr[i]);
            count++;
        }
        i++;
    }

    printf("\nCount = %d", count);

    return 0;
}
