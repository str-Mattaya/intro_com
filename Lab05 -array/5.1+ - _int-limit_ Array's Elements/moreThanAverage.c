#include <stdio.h>
#include <stdlib.h>

int main()
{
    float mean = 0;
    int *arr;
    int count = 0;
    int n;

    int i=0;
    
    printf("Enter number: "); scanf(" %d", &n);
    if(n < 1) return -1;
    
    arr = (int*)malloc(sizeof(int) * n);
    
    printf("Enter %d numbers: ", n);
    while(i<n)
    {
        scanf(" %d", &arr[i]);
        mean += arr[i];
        i++;
    }
    mean /= n;

    printf("\nAverage = %.2f\n> ", mean);
    i=0;
    while(i<n)
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
