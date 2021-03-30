#include <stdio.h>

void menu();
float average(float arr[]);
float sum(float arr[]);
float max(float arr[]);

int main()
{
	char ch;
	
	float arr[3] = {0};
	
	int i=0;
	while(i < 3)
	{
		printf("Enter num%d: ", i+1);
		scanf(" %f", &arr[i++]);
	}
	
	printf("\n");
	menu();
	printf("\nChoose: "); scanf(" %c", &ch);
	
	printf("\n");
	switch(ch)
	{
		case '1':
			printf("Sum = %.1f", sum(arr));
			break;
		case '2':
			printf("Average = %.1f", average(arr));
			break;
		case '3':
			printf("Maximum = %.1f", max(arr));
			break;
		default:
			printf("Invalid case");
	}
	
	return 0;
}

void menu()
{
	printf("Press '1': SUM\n");
	printf("Press '2': AVERAGE\n");
	printf("Press '3': MAX\n");
}

float average(float arr[])
{
	return sum(arr) / 3;
}

float sum(float arr[])
{
	float sum = 0;
	int i=0;
	while(i<3)
	{
		sum += arr[i++];
	}
	return sum;
}

float max(float arr[])
{
	float m = arr[0];
	int i=0;
	while(i<3)
	{
		if(arr[i] > m)
			m = arr[i];
		
		i++;
	}
	return m;
}
