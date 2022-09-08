#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(void)
{
	int n,i,sum;
	sum=1;
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		sum=sum*i;
	}
	printf("%d",sum);
	
	return 0;
}
