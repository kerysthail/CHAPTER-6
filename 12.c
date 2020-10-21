# CHAPTER-6
#include<stdio.h>
int p(int n);
int main(void)
{
	float m = 1.0, sum1 = 0, sum2 = 0, sum;
	int n, i, j, k;

	printf("Please input the upper limit:");
	scanf_s("%d", &j);//循环项数
	for (i = 1; i <=j; i++)
	{
		sum1 = sum1 + 1.0 / m;
		k = p(i);
		sum2 = sum2 + k * (1.0 / m);
		m++;
	}
	sum = sum1 + sum2;//总和
	printf("The summary is %f.", sum);

	return 0;
}
int p(int n)//计算sum2每项前的符号
{
	int l,a=-1;

	for (l = 1; l <=n; l++)
	{
		a = a * -1;
	}

	return a;
}
