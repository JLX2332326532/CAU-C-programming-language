#include<stdio.h>
#include<stdlib.h>
int a(int x,int y);
int b(int x,int y,int z);
int main(void)
{

	int m,n,c,x,y;
	scanf("%d%d",&x,&y);
	if(y>x) 
	{
		c=x;
		x=y;
		y=c;
	}
	m=a(x,y);
	n=b(x,y,m);
	printf("%d %d",m,n);
	return 0;
}
int a(int x,int y)
{
	int m,n,i,j;
	j=1;
		m=x/y;
		n=x%y;
		x=y;
		y=n;
	for(i=1;n!=0;i++)
	{
		m=x/y;
		n=x%y;
		x=y;
		y=n;
	}
	j=x;
	return j;
}
int b(int x,int y,int z)
{
	int j;
	j=x*y/z;
	return j;
}






