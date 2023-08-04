#include <stdlib.h>
#include <stdio.h>

int main(void)
{
	char vowel[10] = {'a', 'e', 'o', 'u', 'i', 'A', 'E', 'O', 'U', 'I'};
	int i;
	char c;

	printf("Enter a character: ");
	scanf("%c", &c);

	if ((c < 65 || c > 90) && (c < 97 || c > 122))
	{
		printf("%c is not an alphabetical character\n", c);
		return (0);
	}
	else
	{
		for (i = 0; i <= 9; i++)
		{
			if(c == vowel[i])
			{
				printf("%c is a vowel !\n", c);
				return (1);
			}
		}
		printf("%c is a consonant !\n", c);
		return (1);
	}
	return (1);
}
