#include<stdio.h>
int main()
{
	int a[2][3]={{2,4,6},{8,10,12}},i,j;
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%4d",a[i][j]);
		}
		putchar('\n');
	}
	for(j=0;j<3;j++)
	{
		for(i=0;i<2;i++)
		{
			printf("%4d",a[i][j]);
		}
		putchar('\n');
	}
	return 0;
}