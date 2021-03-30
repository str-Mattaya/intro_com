#include <stdio.h>
#include <stdlib.h>

int main()
{
    float w,h;
    printf("Enter height(m): "); scanf(" %f", &h);
    printf("Enter weight(kg): "); scanf(" %f", &w);

    if(w <= 0 || h <= 0) return -1;
    printf("\n");

    float bmi = w/(h*h);

    if(bmi < 18.5)
        printf("Underweight");
    else if(bmi < 25)
        printf("Normal");
    else if(bmi <= 30)
        printf("Overweight");
    else
        printf("Obese");

    printf("\n\n");
    system("pause");
    return 0;
}
