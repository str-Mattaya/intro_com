#include <stdio.h>

int main()
{
    char xo[4][4] = {{'O','O','O','O'},{'O','O','O','O'},{'O','O','O','O'},{'O','O','O','O'}};

    int x,y;
    printf("Enter coordinate to mark 'X' e.g.(0,0): "); scanf(" (%d,%d)", &x, &y);

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
