# CHAPTER-6
#include<stdio.h>
int main(void)
{
	int f = 5, week = 0;

	for (week = 1; f <= 150; week++)//f小于等于邓巴数
	{
		f = 2 * (f - week);
		printf("第%d周有%d个朋友。\n", week, f);
	}
	printf("%d周后Rabnud博士数量超过邓巴数。\n", week-1);

	return 0;
}
