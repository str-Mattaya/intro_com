#include <stdio.h>
#include <ctype.h>

int main()
{
	char grade = '0';
	
	while(grade < 'A' || grade > 'E')
	{
		printf("Enter grade: ");
		scanf(" %c", &grade);
		grade = toupper(grade);
	}
	
	printf("\nGrade = %c", grade);
	
	return 0;
}