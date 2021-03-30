#include <stdio.h>
#include <stdlib.h>

int main()
{
    int hh,mm;
    int hr,mn;
    printf("Enter-time (format hh.mm): "); scanf(" %d.%d", &hh, &mm);
    printf("Out-time (format hh.mm): "); scanf(" %d.%d", &hr, &mn);
    printf("\n");

    if(hh < 0 || mm < 0 || mm >= 60 || hh >= 24) return -1;
    if(hr < 0 || mn < 0 || mn >= 60 || hr >= 24) return -1;
    if(hr < hh) return -2;
    if(hr == hh && mn < mm) return -2;

    int time = 60*(hr-hh) + (mn-mm);
    printf("Total time = ");

    if(time >= 60)
    {
        printf("%d hour", time/60);
        if(time >= 120)
            printf("s");
    }

    if(time%60 != 0)
    {
        printf(" %d minute", time%60);
        if(time%60 > 1)
            printf("s");
    }
    printf(".\nCost = ");
    if(time/60 >= 15 && time%60 > 0)
    {
        printf("300");
    }else if(time > 120)
    {
        time -= 120;
        if(time%60 > 0)
        {
            time = time+60-(time%60);
        }
        printf("%d",50 + 10*(time/60));
    }else
    {
        printf("50");
    }


    printf(" Baht.\n\n");
    system("pause");
    return 0;
}
