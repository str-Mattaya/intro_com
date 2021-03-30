#include <stdio.h>
#include <conio.h>

main()
{
	int date = 19960101;
	printf("Enter date(19960201 => 2/1/1996): ");
	scanf("%d",&date);
	//Parsing...
	int dd = 1, mm = 1, yy = 1996;
	dd = date % 100;
	mm = (date % 10000) / 100;
	yy = date / 10000;
	//Result
	printf("\n%02d-%02d-%04d",mm,dd,yy);
	getch();
}
