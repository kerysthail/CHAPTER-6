#include<stdio.h>
#include<string.h>
int main(void)
{
	int b,i,j;
	char a[40] = {0}, c[40];

	printf("Please input a word:\n");
	scanf_s("%s", a, 40);
	j = strlen(a);
	b = strlen(a) - 1;
	for (i=0; i<j; i++)
	{
		c[i] = a[b];
		b--;
		printf("%c", c[i]);
	}

	return 0;
}
