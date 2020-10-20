# CHAPTER-6
#include<stdio.h>
int main(void)
{
	int f;
	float a, b,c,d,e;

	printf("Please input two numbers:");
	f = f = scanf_s("%f %f", &a, &b);
	while (f==2)
	{
		c = a - b;
		d = a * b;
		e = c / d;
		printf("%f\n",e);
		printf("Please input another two numbers:");
		f = scanf_s("%f %f", &a, &b);
	}

	return 0;
}
