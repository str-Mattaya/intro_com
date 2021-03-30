#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main ()
{
    srand(time(0));
    int n, i;
    for(i=0; i<10; i++)
    {
        n = rand()%100;
        printf("%d ", n );
    }
    printf("\n\n");
    for(i=0; i<10; i++)
        printf("%d ",1+rand()%20 );
    return 0;
}
