#include <stdio.h>
#include <stdlib.h>

int main()
{
    int starter,mainCourse,dessert;
    printf("Enter number of starters: "); scanf(" %d", &starter);
    printf("Enter number of main courses: "); scanf(" %d", &mainCourse);
    printf("Enter number of desserts: "); scanf(" %d", &dessert);

    if(starter < 0) return -1;
    if(mainCourse < 0) return -1;
    if(dessert < 0) return -1;

    if(mainCourse >= 2 && dessert >= 1) dessert--;

    printf("\nTotal cost = %d baht", 80*starter + 100*mainCourse + 40*dessert);

    printf("\n\n");
    system("pause");

    return 0;
}
