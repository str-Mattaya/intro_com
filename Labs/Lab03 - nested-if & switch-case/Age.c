#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age, height;
    printf("Enter age: "); scanf(" %d", &age);
    if(age < 0) return -1;

    printf("\nYou are ");

    if(age <= 4)
        printf("pre-school child");
    else if(age <= 11)
        printf("kid");
    else if(age <= 19)
        printf("adolescent");
    else if(age <= 59)
        printf("adult");
    else
        printf("elderly");

    printf(".\n\n");
    system("pause");

    return 0;
}
