# CHAPTER-6
#include<stdio.h>
float p(float n, float m);
int main(void)
{
	int ul, ll, a, su;

	printf("Please input lower and upper integer limits:");
	a = scanf_s("%d %d", &ll, &ul);
	while ((a==2)&&(ll!=ul))
	{
		int sum=0;
		for (ll, ul; ll <= ul; ll++)
		{
			sum = sum + ll * ll;
		}
		printf("The sums of the squares from %d to %d is %d.\n", ll * ll, ul * ul, sum);
		printf("Enter next set of limits:");
		a = scanf_s("%d %d", &ll, &ul);
		
	}
	printf("Done!");

	return 0;
}
