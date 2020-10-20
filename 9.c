# CHAPTER-6
#include<stdio.h>
float p(float n, float m);
int main(void)
{
	int f;
	float a, b,g;

	printf("Please input two numbers:");
	f = f = scanf_s("%f %f", &a, &b);
	while (f==2)
	{
		g = p(a, b);
		printf("%f\n",g);
		printf("Please input another two numbers:");
		f = scanf_s("%f %f", &a, &b);
	}

	return 0;
}
float p(float n, float m)
{
	float c, d, e;

	c = n - m;
	d = n * m;
	e = c / d;

	return e;
}
