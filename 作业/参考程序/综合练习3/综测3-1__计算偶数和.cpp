#include<stdio.h>
int main()
{
	int sum(int n);
	int n;
	scanf("%d",&n);
	printf("%d",sum(n));
}

int sum(int n)
{
	if(n==100)
		return 100;
	else
		return sum(n-2)+n;
}