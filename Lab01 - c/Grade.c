#include <stdio.h>
#include <conio.h>

main()
{
	char nameI[256]; char groupI; float gpaI;
	printf("Student No.1\n");
	printf("--------------\n");
	printf("Name: "); scanf(" %s", nameI);
	printf("Group: "); scanf(" %c", &groupI);
	printf("GPA: "); scanf(" %f", &gpaI);
	printf("--------------\n");
	
	char nameII[256]; char groupII; float gpaII;
	printf("Student No.2\n");
	printf("--------------\n");
	printf("Name: "); scanf(" %s", nameII);
	printf("Group: "); scanf(" %c", &groupII);
	printf("GPA: "); scanf(" %f", &gpaII);
	printf("--------------\n");
	
	char nameIII[256]; char groupIII; float gpaIII;
	printf("Student No.3\n");
	printf("--------------\n");
	printf("Name: "); scanf(" %s", nameIII);
	printf("Group: "); scanf(" %c", &groupIII);
	printf("GPA: "); scanf(" %f", &gpaIII);
	printf("--------------\n\n");
	
	printf("REPORT\n");
	printf("------------------------------\n");
	printf("Name\t\tGroup\t  GPA\n");
	printf("------------------------------\n");
	printf("%s\t\t  %c\t %.2f\n",nameI,groupI,gpaI);
	printf("%s\t\t  %c\t %.2f\n",nameII,groupII,gpaII);
	printf("%s\t\t  %c\t %.2f\n",nameIII,groupIII,gpaIII);
	printf("------------------------------\n");
	getch();
}
