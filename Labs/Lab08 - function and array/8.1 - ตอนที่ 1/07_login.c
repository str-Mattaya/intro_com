#include <stdio.h>
#include <conio.h>
#include <string.h>

int checkLogin(char *username, char *password)
{
    if(strcmp(username, "freedom") == 0 && strcmp(password, "x10a") == 0)
        return 1;

    return 0;
}

int main()
{
    char username[256], password[256] = "";

    printf("Username: "); gets(username);
    printf("Password: ");

    int i=0;
    for(;;)
    {
        char ch = getch();
        if(ch == '\r')
            break;
        else if(ch == '\b')
        {
        	if(strlen(password) > 0)
        	{
        		printf("\b \b");
        		password[--i] = '\0';
			}else
			{
				printf("\a");
			}
		}
		
		if(strlen(password) < 255)
		{
			if(ch != '\b')
			{
				printf("*");
        		password[i++] = ch;
			}
		}else
		{
			printf("\a");
		}
        
    }

    printf("\n\n");

    if(checkLogin(username,password))
        printf("Success");
    else
        printf("Failed to Login");

    return 0;
}
