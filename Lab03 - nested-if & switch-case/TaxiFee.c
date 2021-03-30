#include <stdio.h>
#include <stdlib.h>

int main()
{
    float d;
    printf("Enter distance(km): "); scanf(" %f", &d);

    if(d < 0) return -1;

    if((int)(d*10)%10 != 0)
    {
        d += 1;
    }
    d = (int)(d);

    printf("\n");

    float cost = 0;
    if(d > 10)
    {
        cost += 5.50*(d-10);
        d = 10;
    }

    if(d > 1)
    {
        cost += 5*(d-1);
        d = 1;
    }

    if(d == 1)
        cost += 35;

    printf("Taxi Fee = %.2f baht", cost);

    printf("\n\n");
    system("pause");

    return 0;
}
