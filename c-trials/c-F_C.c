#include <stdlib.h>
#include <stdio.h>
int main(void)
{
	float F, C, d;

	printf("What is the temprature in °F ?\n");
	scanf("%f", &F);
	d = F - 32;
	C = d * 5 / 9;
	printf("Then, it is %.1f °C, ", C);
	if (C <= 5)
		printf("Brrr...That is FREEZING !\n");
	else if (C <= 18)
		printf("And it is a bit chilly !\n");
	else if (C <= 25)
		printf("It's a nice day !\n");
	else if (C <= 35)
		printf("A nice day for a swim\n");
	else
		printf("WOW...It is BAKING hot !\n");
	return (0);
}
