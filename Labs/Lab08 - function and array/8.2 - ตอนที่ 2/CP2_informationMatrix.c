#include <stdio.h>

void inputMatrix(int M[3][2]);
int min(int M[3][2]);
int max(int M[3][2]);

int main()
{
    int matrix[3][2];
    inputMatrix(matrix);
    printf("\nMin = %d", min(matrix));
    printf("\nMax = %d", max(matrix));
    return 0;
}

void inputMatrix(int M[3][2])
{
    int i,j;
    printf("Enter elements of M[3x2]\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("M[%d][%d] = ", i+1, j+1);
            scanf(" %d", &M[i][j]);
        }
    }

    printf("\nMatrix...\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d ", M[i][j]);
        }
        printf("\n");
    }
}

int min(int M[3][2])
{
    int m = M[0][0];
    int i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<2;j++)
        {
            if(M[i][j] < m)
                m = M[i][j];
        }
    }
    return m;
}
int max(int M[3][2])
{
    int m = M[0][0];
    int i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<2;j++)
        {
            if(M[i][j] > m)
                m = M[i][j];
        }
    }
    return m;
}
