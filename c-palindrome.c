#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int count(int n)
{
	int i = 0;

	while (n)
	{
		i++;
		n = n / 10;
	}

	return (i);
}

int main(void)
{
	int *r, *v;
	int i = 0, n, d, flag = 0;

	printf("Enter a Number : ");
	scanf("%d", &n);

	int tmp = n;
	int t = n;

	d = count(n);

	r = malloc(sizeof(int) * d);
	v = malloc(sizeof(int) * d);

	for (i = 0; tmp > 0; i++)
	{
		v[i] = tmp % 10;
		tmp = tmp / 10;
	}

	for (int o = d - 1; o >= 0; o--)
	{
		r[o] = n % 10;
		n = n / 10;
	}

	int j = 0;

	while (j < d)
	{
		if (r[j] == v[j])
		{
			j++;
		}
		else
		{
			flag = 1;
			break;
		}
	}

	if (flag == 0)
	{
		printf("%d is a Palindrome Number\n", t);
	}
	else
		printf("%d is Not a Palindrome Number\n", t);

	free(v);
	free(r);

	return (0);
}
