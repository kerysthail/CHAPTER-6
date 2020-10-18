#include<stdio.h>
int main(void)
{
	int ul, ll;
	int b, c;

	printf("Please input upper limit:\n");
	scanf_s("%d",&ul);
	printf("Please input lower limit:\n");
	scanf_s("%d",&ll);
	printf("   number    squre     cube\n");
	for (ll; ll <= ul; ll++)
	{
		b = ll * ll;
		c = ll * ll * ll;
		printf("%9d%9d%9d\n", ll, b, c);
	}


	return 0;
}
