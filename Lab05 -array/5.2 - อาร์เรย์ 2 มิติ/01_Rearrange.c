#include <stdio.h>

int main()
{
    int arr[3][2] = {0};
    printf("Enter 6 numbers: ");

    int i=0,j=0;
    while(i<3)
    {
        j=0;
        while(j<2)
        {
            scanf(" %d", &arr[i][j]);
            j++;
        }
        i++;
    }

    printf("\nYour input is\n");
    i=0; j=0;
    while(i<3)
    {
        j=0;
        while(j<2)
        {
            printf("%d ", arr[i][j]);
            j++;
        }
        printf("\n");
        i++;
    }

    return 0;
}
