#include <stdio.h>
#include <stdlib.h>

int main()
{
    float sale;
    printf("Total sales: "); scanf(" %f", &sale);
    if(sale < 0) return -1;

    printf("\n");

    float commission = 0;

    if(sale < 1000) commission = 0.05 * sale;
    else if(sale <= 5000) commission = 0.07 * sale;
    else commission = 0.1 * sale;

    printf("Sales commission = %.2f baht", commission);

    printf("\n\n");
    system("pause");
    return 0;
}
