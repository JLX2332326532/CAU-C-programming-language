#include<stdio.h>
#include<math.h>
int main(void)
{
	int n,a,b,c,d;

	scanf("%d",&n);

	a=n/1000;
	n=n-a*1000;

	b=n/100;
	n=n-b*100;

	c=n/10;
	d=n-c*10;

	printf("%d %d %d %d",a,b,c,d);
	return 0;
}