#include<stdio.h>
int p(int n)
{
	int i;
	for(i=2;i<n;i++)
	{
		if(n%i==0)	return 0;
	}
	return 1;
}
int main()
{
	int n,b,i;
	for(i=100;i<=500;i++)
	{
		if(p(i)==1)	printf("%d\n",i); 
	}
	return 0;
}
