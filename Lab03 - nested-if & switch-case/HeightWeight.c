#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age, height;
    printf("Enter age: "); scanf(" %d", &age);
    printf("Enter height: "); scanf(" %d", &height);
    if(age < 0 || height <= 0) return -1;

    printf("\n");

    if(age >= 18 && age <= 25 && height >= 165)
        printf("Good");
    else
        printf("Not Good");

    printf("\n\n");
    system("pause");

    return 0;
}
