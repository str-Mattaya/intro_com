#include <stdio.h>

int main()
{
    char xo[4][4] = {{'O','O','O','O'},{'O','O','O','O'},{'O','O','O','O'},{'O','O','O','O'}};

    int x,y;
    printf("Enter coordinate to mark 'X' from (0,0) to (4,4): "); scanf(" (%d,%d)", &x, &y);

    xo[x][y] = 'X';

    int i,j;
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("%c ", xo[i][j]);
        }
        printf("\n");
    }

    return 0;
}
