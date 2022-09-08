#include<stdio.h>
int main()
{
	int f(int a,int b);
	int g(int a,int b);
	int a,b,(*p)(int a,int b);
	scanf("%d%d",&a,&b);
	if(a*a+b*b>100)
		p=f;
	else
		p=g;
	printf("%d\n",(*p)(a,b));
	return 0;
}

int f(int a,int b)
{
	return (a*a+b*b)/100;
}

int g(int a,int b)
{
	return a+b;
}
