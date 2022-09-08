#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c,p;
	scanf("%d",&p);
	a=p/100;
	p=p-a*100;
	b=p/10;
	c=p-b*10;
	p=c*100+b*10+a;
	printf("%d",p);
	return 0;
}