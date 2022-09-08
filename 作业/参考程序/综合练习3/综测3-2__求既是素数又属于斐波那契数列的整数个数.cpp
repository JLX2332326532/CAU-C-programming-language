#include<stdio.h>
#include<math.h>
int main()
{
	int count(int n);
	int n;
	scanf("%d",&n);
	printf("%d",count(n));
}

int count(int n)
{
	int fab(int i);
	int prime(int i);
	int d=0,i;
	for(i=1;i<n;i++)
	{
		if(fab(i)&&prime(i))
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
		if(j<=sqrt(i))
			return 0;
		else
			return 1;
	}
}

int fab(int i)
{
	int f(int x);
	int j;
	for(j=1;;j++)
	{
		if(f(j)==i)
		{
			return 1;
			break;
		}
	    if(f(j)>i)
		{
			return 0;
			break;
		}
	}
}

int f(int x)
{
	if(x==1||x==2)
		return 1;
	else
		return f(x-1)+f(x-2);
}




