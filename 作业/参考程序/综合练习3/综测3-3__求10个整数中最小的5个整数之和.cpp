#include<stdio.h>
int main()
{
	void order(int a[]);
	int sum(int a[]);
	int a[10],i;
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	order(a);
	printf("%d",sum(a));
}

void order(int a[])
{
	int i,j,t;
	for(i=1;i<9;i++)
	{
		for(j=0;j<=9-i;j++)
		{
			if(a[j]>a[j+1])
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	}
}

int sum(int a[])
{
	return a[0]+a[1]+a[2]+a[3]+a[4];
}

