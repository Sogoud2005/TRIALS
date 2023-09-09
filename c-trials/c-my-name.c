#include <stdlib.h>
#include <stdio.h>

int main(void)
{
	char first[20], last[20];

	printf("Please, enter your first name !\n");
	scanf("%s", first);
	printf("Please, enter your last name !\n");
	scanf("%s", last);
	printf("It is nice to meet you, %s %s!\n", first, last);
	return (0);
}
