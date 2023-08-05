#include <stdlib.h>
#include <stdio.h>

int main(void)
{
	char c;

	for (c = 'A'; c <= 'Z'; c++)
	{
		printf("%c", c);
		putchar(' ');
		
	}
	putchar('\n');
	return (0);
}
