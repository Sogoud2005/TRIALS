#include <stdlib.h>
#include <stdio.h>

int main(void)
{
	int year;

	printf("What year is it ?\n");
	scanf("%d", &year);

	if (year % 400 == 0)
		printf("YAY!! It's a LEAP YEAR !\n");
	
	else if (year % 4 == 0)
		printf("YAY!! It's a LEAP YEAR !\n");
		
	else if (year % 100 == 0)
		printf("%d? Well, hope you have a nice year !\n", year);

	else
		printf("%d? Well, hope you have a nice year !\n", year);
	return (0);
}
