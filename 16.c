# CHAPTER-6
#include<stdio.h>
int main(void)
{
	const int a = 100;
	float b = 0.1, c = 0.05, sum1 = 100, sum2 = 100;
	int i = 0;

	while (sum2 <= sum1)
	{
		sum1 = sum1 + a * b;
		sum2 = sum2 + sum2 * c;
		i++;
	}
	printf("%d years later,Daphne:%f,Deirdre:%f.\n",i, sum1, sum2);

	return 0;
}
