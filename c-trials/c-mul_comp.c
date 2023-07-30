#include <stdlib.h>
#include <stdio.h>
#include <complex.h>

//structure for storing the real and imaginery
//values of complex number
typedef struct complexnum{
   int real, img;
};
complexnum sumcomplex(complexnum i, complexnum j){
   struct complexnum c;
   //Adding up two complex numbers
   c.real = i.real + j.real;
   c.img = i.img + j.img;
   return (c);
}

int main(void)
{
	int i, j;

	printf("Enter the 1st number : ");
	scanf("%d%d", &i, &i);

	printf("Enter the 2nd number : ");
	scanf("%d%d", &j, &j);

	struct complexnum a = {i, i};
	struct complexnum b = {j, j};
	struct complexnum c = sumcomplex(i, j);

	printf("The result of a x b = %d + i%d\n", c.real, c.img);
	return (0);
}
