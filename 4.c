# CHAPTER-6
#include<stdio.h>

int main(void)
{
	int i, j,k;
	char c = 'A';

	for (i = 1; i <=6; i++)
	{
		for (j = 0; j <i; j++)
		{
			printf("%c",c++);
		}
		printf("\n");
	}


	return 0;
}
