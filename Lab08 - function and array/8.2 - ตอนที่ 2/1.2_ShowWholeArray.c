#include <stdio.h>

void show1(int x);
void show2(int x[], int n);

int main()
{
    int i;
    int a[5]= {3, -1, 2, 7, 8};

    printf("Show all elements of array\n");
        show2(a, 5);

    printf("\nEnd of program.\n");

    getch();
    return 0;
}

void show1(int x)
{
    printf(" %d ", x);
}

void show2(int x[], int n)
{
    int i;
    for(i=0;i<n;i++)
        printf(" %d ", x[i]);
}
