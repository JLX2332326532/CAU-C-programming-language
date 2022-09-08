#include<stdio.h>
int main()		
{ 
	int m, n, a, b, t, c;
	scanf("%d%d",&a,&b);
	m=a;  n=b;
	for(;b!=0;)		
	{
		c=a%b;  a=b;  b=c;
	}
	printf("%d %d\n",a,m*n/a);
	return 0;
}
