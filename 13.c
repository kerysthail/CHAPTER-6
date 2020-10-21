# CHAPTER-6
#include<stdio.h>
int p(int n);
int main(void)
{
	int a[8], i, j = 0;

	printf("Please input 8 numbers:\n");
	for (i = 0; i <= 7; i++)
	{
		scanf_s("%d", &a[i]);
	}
	do
	{
		printf("%d", a[j]);
		j++;
	} while (j<=7);

	return 0;
}
