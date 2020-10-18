# CHAPTER-6
#include<stdio.h>
#define rows 5
int main(void)
{
	char a,b;
	int i,j,k,l;

	printf("Please input a uppercase letter:");
	scanf_s("%c", &a);
	for (i = 1; i <=rows; i++)
	{
		b = a;
		for (j = 0; j < (rows - i); j++)
			printf(" ");
		for (k = 0; k < i; k++)
			printf("%c", b++);
		b--;
		for (l = 0; l < (i - 1); l++)
			printf("%c",--b);
		printf("\n");
	}

	return 0;
}
