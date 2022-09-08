#include<stdio.h>
#include<math.h>
int main()
{
	int count(int a,int b);
	int a,b;
	scanf("%d%d",&a,&b);
	printf("%d",count(a,b));
}

int count(int a,int b)
{
	int prime(int i);
	int i,d=0;
	for(i=a;i<=b;i++)
	{
		if(prime(i))
			d++;
	}
	return d;
}

int prime(int i)
{
	int j;
	if(i==1)
		return 0;
	else if(i==2||i==3)
		return 1;
	else 
	{
		for(j=2;j<=sqrt(i);j++)
		{
			if(i%j==0)
				break;
		}
		if(j>sqrt(i))
			return 1;
		else
			return 0;
	}
}