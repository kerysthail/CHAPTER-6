#include<stdio.h>
int main(void)
{
	int i;
	char a[26];

	for (i = 0; i <=25; i++)
	{
		a[i] = 'a' + i;
		printf("%c\n", a[i]);
	}

	return 0;
}
