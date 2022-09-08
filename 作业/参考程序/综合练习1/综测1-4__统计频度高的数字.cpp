#include<stdio.h>
int main()
{
	void statistics(int x,int count[]);
	void check(int count[]);
	int n,a[1000],i,count[10]={0};
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		statistics(a[i],count);
	}
	check(count);
}

void statistics(int x,int count[])
{
	if(x!=0)
	{
		count[x%10]++;
		statistics(x/10,count);
	}
}

void check(int count[])
{
	int i,j,d;
	for(j=i=0,d=count[0];i<10;i++)
	{
//		printf("%d ",count[9-i]);
		if(count[i]>d)
		{
			j=i;
			d=count[i];
		}
	}
	printf("%d:%d",d,j);
	for(i=0;i<10;i++)
	{
		if(count[i]==d&&i!=j)
			printf(" %d",i);
	}
}




