#include <stdio.h>
#include <string.h>

int isDuplicate(char names[20][9], char text[9])
{
    int i;
    for(i=0;i<19;i++)
    {
        if(strcmp(names[i], "") == 0) break;
        if(strcmp(names[i], text) == 0 && strcmp(names[i+1], "") != 0)
            return 1;
    }
    return 0;
}

int main()
{
    int i;
    char str[20][9] = {"","","","","","","","","","","","","","","","","","","",""};

    for(i=0;i<20;)
    {
        printf("Enter username #%02d: ", i+1); gets(str[i]);

        if(isDuplicate(str,str[i]) && i != 0)
            printf("Try again!!!");
        else
            i++;

        printf("\n");
    }

    printf("Reporting...\n");
    for(i=0;i<20;i++)
    {
        printf("#%02d: %s\n", i+1, str[i]);
    }

    return 0;
}
