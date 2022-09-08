#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main(void)
{
	int *p;
	
	int sum=0,i,n,sum1=0,sum2=0;
	scanf("%d",&n);
	p=(int*)malloc(n*sizeof(int));
	for(i=0;i<n;i++)
	{
		p[i]=i+1;
		sum=sum+p[i];
	}
	
	for(i=1;i<=n;i+=2)
	{
		sum1=sum1+p[i-1];
	}
	
	printf("%d\n%d\n%d",sum-sum1,sum1,sum);
	
	free(p);
	return 0;
	
}
