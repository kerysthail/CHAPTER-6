# CHAPTER-6
#include<stdio.h>

int main(void)
{
	int i, j;
	char c = 'F';

	for (i = 1; i <=6; i++)
	{
		for (j = 0; j <i; j++)
		{
			printf("%c",c-j);
		}
		printf("\n");
	}


	return 0;
}
