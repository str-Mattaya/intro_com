#include <stdio.h>

int main()
{
    int firstDay;
    int month[3];

    printf("Day of the week of the first month: ");
    scanf(" %d", &firstDay);
    printf("Number of days of each month: ");
    scanf(" %d%d%d",&month[0], &month[1], &month[2]);
    printf("\n");

    if(firstDay < 1 || firstDay > 7) return -1;
    if(month[0] < 28 || month[0] > 31) return -1;
    if(month[1] < 28 || month[1] > 31) return -1;
    if(month[2] < 28 || month[2] > 31) return -1;

    int i;
    int j=0;
    int k=0;

    for(k=0; k<3; k++)
    {
        for(i=(2-firstDay); i<=month[k]; i++)
        {
            if(i < 1)
            {
                printf("   ");
            }
            else
            {
                printf("%2d ", i);
            }
            j++;
            if(j == 7)
            {
                printf("\n");
                j=0;
            }
        }
        firstDay = j+1;
        j=0;
        printf("\n\n");
    }

    return 0;
}
