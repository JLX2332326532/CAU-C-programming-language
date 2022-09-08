#include<stdio.h>
int main()
{
	int stair(int n);
	int n;
	scanf("%d",&n);
	printf("%d",stair(n));
}

int stair(int n)
{
	if(n==1)
		return 1;
	else if(n==2)
		return 2;
	else
	{
		return stair(n-1)+stair(n-2);
		
	}
}
