#include <stdio.h>
#include <conio.h>

main()
{
	int dd = 1,mm = 1,yy = 1996;
	printf("Enter Date: ");
	scanf("%d/%d/%d",&dd,&mm,&yy);
	
	printf("\n%02d/%02d/%04d", mm,dd,yy-543);
	getch();
}
