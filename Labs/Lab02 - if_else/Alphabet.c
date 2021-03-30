#include <stdio.h>
#include <ctype.h>

int main()
{
	printf("Enter character: ");
	char ch; scanf(" %c",&ch);
	ch = tolower(ch);
	
	if(ch >= 'a' && ch <= 'z')
	{
		if(ch == 'a') printf("Vowel Alphabet");
		else if(ch == 'e') printf("Vowel Alphabet");
		else if(ch == 'i') printf("Vowel Alphabet");
		else if(ch == 'o') printf("Vowel Alphabet");
		else if(ch == 'u') printf("Vowel Alphabet");
		else printf("Consonant Alphabet");
		
	}else if(ch >= '0' && ch <= '9')
	{
		printf("Number");
	}else
	{
		printf("Punctuation");
	}
	return 0;
}
