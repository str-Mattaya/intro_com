#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	srand(time(NULL));
	
	int i = rand()%50 + 1;
	int j = 0;
	printf("= Enter number between 1-50 =\n\n");
	while(j != i)
	{
		printf("Guess: "); scanf(" %d", &j);
		if(j < i)
			printf("The answer is higher.\n");
		else if(j > i)
			printf("The answer is lower.\n");
	}
	
	printf("\nThat's correct.");
	
	return 0;
}
