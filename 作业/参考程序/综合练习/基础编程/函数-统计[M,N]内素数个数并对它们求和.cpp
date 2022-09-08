#include<stdio.h>
#include<math.h>
int main()
{
	int prime(int i);
	int a,b,i,j=0,sum=0;
	scanf("%d%d",&a,&b);
	for(i=a;i<=b;i++)
	{
		if(prime(i))
		{
			j++;
			sum+=i;
		}
	}
	printf("%d %d",j,sum);
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
