#include <stdlib.h>
#include <stdio.h>
int main(void)
{
	int P, R, T, SI;

	printf("Enter the principal amount : ");
	scanf("%d", &P);

	printf("Enter the rate of interest : ");
	scanf("%d", &R);

	printf("Please, Enter the time in years : ");
	scanf("%d", &T);

	SI = (P * R * T)/100;

	printf("Your Simple Interest is %d\n", SI);
	return (SI);
}
