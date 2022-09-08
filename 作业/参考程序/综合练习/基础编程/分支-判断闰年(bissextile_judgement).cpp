#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	if((n%4==0&&(n%100)!=0)||n%400==0)  putchar('y');
	else  putchar('n');
	return 0;
}