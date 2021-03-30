#include <stdio.h>
#include <stdlib.h>

int findDiff(int a[], int b[], int len)
{
    int d=0,i;

    for(i=0;i<len;i++)
    {
        if(a[i] != b[i])
            d++;
    }

    return d;
}

int main()
{
    int len;
    printf("Enter size: "); scanf(" %d", &len);

    int *arrA = malloc(sizeof(int) * len);
    int *arrB = malloc(sizeof(int) * len);
    int i;

    printf("Assign Array of A: ");
    for(i=0;i<len;i++)
    {
        scanf(" %d", &arrA[i]);
    }
    printf("Assign Array of B: ");
    for(i=0;i<len;i++)
    {
        scanf(" %d", &arrB[i]);
    }

    printf("\nThere is/are %d different(s).", findDiff(arrA,arrB,len));

    free(arrA);
    free(arrB);
    return 0;
}
