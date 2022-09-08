#include<stdio.h>
int main()
{
	int a,b,c;
	scanf("%d%d",&a,&b);
	c=a*a+b*b;
	if(c>100)  printf("%d",c/100);
	else  printf("%d",a+b);
}