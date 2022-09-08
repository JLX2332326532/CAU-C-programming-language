#include<stdio.h>
int max(int m,int n);
int main()
{
	int m,n,a;
	scanf("%d%d",&m,&n);
	a=max(m,n);
	printf("%d",a);
	return 0;
}
int max(int m,int n)
{
	int max;
	if(m>n)
		max=m;
	else
		max=n;
	
	return(max);
}
