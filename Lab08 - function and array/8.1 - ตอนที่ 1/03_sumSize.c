#include <stdio.h>
#include <stdlib.h>

int sum(int arr[], int len)
{
    int s = 0, i;
    for(i=0;i<len;i++)
    {
        s += arr[i];
    }
    return s;
}

int main()
{
    int len;
    printf("Enter size: "); scanf(" %d", &len);

    int *arr = malloc(sizeof(int) * len);
    int i;

    printf("Enter %d integer(s): ", len);
    for(i=0;i<len;i++)
    {
        scanf(" %d", &arr[i]);
    }

    printf("\nSum = %d", sum(arr,len));

    free(arr);
    return 0;
}
