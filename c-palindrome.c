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

	d = count(n);

	while (n && i < d)
	{
		r[i] = n % 10;
		printf("%d", r[i]);
		n = n / 10;
		i++;
	}
	printf("\n");

	for (int o = d - 1; o >= 0; o++)
	{
		v[o] = tmp % 10;
		tmp = tmp / 10;
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
		printf("Palindrome\n");
	}
	else
		printf("Not Palindrome\n");

	return (0);
}
