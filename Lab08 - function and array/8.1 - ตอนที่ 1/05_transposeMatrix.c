#include <stdio.h>
#include <stdlib.h>

void showTransposeMatrix(int a[10][10], int m, int n)
{
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int m=1,n=1;
    int matrix[10][10] = {0};

    printf("Enter matrix dimension (mxn): ");
    scanf(" %dx%d",&m,&n);

    printf("\n");
    if(m < 1 || n < 1)
    {
        printf("Matrix's dimension can't be less than one.");
        return -1;
    }
    if(m > 10 || n > 10)
    {
        printf("Out of Range");
        return -2;
    }
    printf("Assigning Matrix...\n");

    int i=0,j=0;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf(" %d", &matrix[j][i]);
        }
    }

    printf("\n\nTransposing Matrix...\n");
    showTransposeMatrix(matrix,m,n);

    return 0;
}
