#include<stdio.h>
int main()
{
	int a,b,c,i;
	a=b=1;
	printf("%d %d ",a,b);
	for(i=1;i<=18;i++)
	{
		c=a+b;
		a=b;
		b=c;
	printf("%d ",c);
	}

	return 0;
}
