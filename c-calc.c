#include <stdlib.h>
#include <stdio.h>

int main(void)
{
	char op;
	double a, b;

	printf("Enter an operator : ");
	scanf("%c", &op);

	printf("Enter the 2 numbers : ");
	scanf("%lf %lf", &a, &b);

	switch (op)
	{
		case '+':
			printf("%.lf %c %.lf = %.lf\n", a, op, b, a + b);
			break;
		case '-':
			printf("%.lf %c %.lf = %.lf\n", a, op, b, a - b);
			break;
		case '*':
			printf("%.lf %c %.lf = %.lf\n", a, op, b, a * b);
			break;
		case '/':
			printf("%.lf %c %.lf = %.lf\n", a, op, b, a / b);
			break;
		default:
			printf("[[ERROR]]\n");
	}
	return (0);
}
