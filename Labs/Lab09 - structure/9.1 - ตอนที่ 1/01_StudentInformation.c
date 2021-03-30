#include <stdio.h>
#include <string.h>

typedef struct student
{
	char name[31];
	char id[14];
	float gpa;
};

int main()
{
	student std1,std2;
	
	strcpy(std1.name,"Mana Rakdee");
	strcpy(std1.id,"5810999");
	std1.gpa = 2.5;
	
	printf("Enter name: ");
	gets(std2.name);
	printf("Enter ID: ");
	scanf(" %s", std2.id);
	printf("Enter GPA: ");
	scanf(" %f", &std2.gpa);
	
	printf("---------------------------------------\n");
	printf("Name\t\t\t\tID\t\t\tGPA\n");
	printf("%-30s\t%-13s\t\t%03.2f\n", std1.name,std1.id,std1.gpa);
	printf("%-30s\t%-13s\t\t%03.2f", std2.name,std2.id,std2.gpa);
	
	return 0;
}