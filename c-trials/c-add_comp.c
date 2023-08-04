#include <stdlib.h>
#include <stdio.h>

//structure for storing the real and imaginery
//values of complex number
typedef struct complexnum{
   int real, img;
} comp_t;

comp_t sumcomplex(comp_t i, comp_t j){
   comp_t c;
   c.real = i.real + j.real;
   c.img = i.img + j.img;
   return (c);
}

int main(void)
{
	comp_t i = {i.real, i.img};
	comp_t j = {j.real, j.img};

	printf("Enter the 1st number : ");
	scanf("%d + %di", &i.real, &i.img);

	printf("Enter the 2nd number : ");
	scanf("%d + %di", &j.real, &j.img);

	comp_t c = sumcomplex(i, j);

	printf("The sum of a + b = %d + %di\n", c.real, c.img);
	return (0);
}
