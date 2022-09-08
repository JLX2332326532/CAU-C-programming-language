#include<stdio.h>
int main()
{
	int a,n,i,term,sum=0;
	scanf("%d%d",&a,&n);
	for(i=1,term=a;i<=n;i++)
	{
		sum+=term;
		term=10*term+a;
	}
	printf("%d",sum);
	return 0;
}
