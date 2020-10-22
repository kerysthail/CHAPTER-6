# CHAPTER-6
#include<stdio.h>
int main(void)
{
	int i, j, n, m;
	double a[8], b[8], sum = 0;

	for (i = 0; i <= 7; i++)
	{
		printf("Please input a number:");
		scanf_s("%lf", &a[i]);
	}
	printf("That's all!\n");
	for (j = 0; j <= 7; j++)
	{
		sum = sum + a[j];
		b[j] = sum;
	}
	for (n = 0; n <= 7; n++)
	{
		printf("%lf ", a[n]);
	}
	printf("\n");
	for (m = 0; m <= 7; m++)
	{
		printf("%lf ", b[m]);
	}
	printf("\n");

	return 0;
}
