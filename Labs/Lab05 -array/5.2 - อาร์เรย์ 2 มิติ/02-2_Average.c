#include <stdio.h>

int main()
{
    int i, j, scores[3][5] = {{1, 2, 3, 4, 5},{6, 7, 8, 9, 10},{11, 12, 13, 14, 15}};
    float sum = 0;
    for(i=0; i<3 ; i++)
    {
        for(j=0; j<5; j++)
            sum += scores[i][j];
    }

    printf("\nAverage = %.2f", sum/15);

    return 0;
}
