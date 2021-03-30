#include <stdio.h>

int main()
{
    int A[5],B[3];
    int i,j;

    printf("- Assign value for Set A -\n");
    for(i=0;i<5;i++)
    {
        printf("A[%d] = ", i); scanf(" %d", &A[i]);
    }
    printf("\n- Assign value for Set B -\n");
    for(i=0;i<3;i++)
    {
        printf("B[%d] = ", i); scanf(" %d", &B[i]);
    }

    printf("\nB is ");
    for(j=0;j<3;j++)
    {
        for(i=0;i<5;i++)
        {
            if(B[j] == A[i]) break;
        }
        if(i == 5)
        {
            printf("not ");
            break;
        }
    }
    printf("subset of A");

    return 0;
}
