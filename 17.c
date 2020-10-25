# CHAPTER-6
#include<stdio.h>
int main(void)
{
	const float a = 100;
	const float rate = 0.08;
	float sum = 100;
	int i;

	for (i = 1; sum > 0; i++)
	{
		sum = sum + sum * rate - 10;
		printf("第%d年后还剩%f万美元。\n", i, sum);
	}
	printf("%d年后取完所有存款。\n",i);

	return 0;
}
