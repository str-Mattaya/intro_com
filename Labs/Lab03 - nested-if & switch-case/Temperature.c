#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t;
    printf("Enter temperature: "); scanf(" %d", &t);

    switch(t)
    {
        case 10: case 15:
            printf("\nVery cold"); break;
        case 20:
            printf("\nSo cool!"); break;
        case 26: case 33:
            printf("\nWish I am on the beach"); break;
        case 35:
            printf("\nSuper hot"); break;
        default:
            printf("\n");
    }

    printf("\n\n");
    system("pause");

    return 0;
}
