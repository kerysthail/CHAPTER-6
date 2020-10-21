# CHAPTER-6
#include<stdio.h>
float p(float n, float m);
int main(void)
{
	int i,a[8];
	
	printf("Please input 8 numbers:\n");
	for (i = 0; i <= 7; i++)
	{
		scanf_s("%d",&a[i]);
	}
	for (i = 7; i >= 0; i--)
	{
		printf("%d", a[i]);
	}

	return 0;
}
