#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch;
    printf("Enter character: "); scanf(" %c", &ch);

    switch(ch)
    {
        case 'r':
        case 'R':
            printf("\nRed"); break;
        case 'y':
        case 'Y':
            printf("\nYellow"); break;
        case 'g':
        case 'G':
            printf("\nGreen"); break;
        default:
            printf("\nStop");
    }

    printf("\n\n");
    system("pause");

    return 0;
}
