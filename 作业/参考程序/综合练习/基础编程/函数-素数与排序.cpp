#include<stdio.h>
#include<math.h>
int main()
{
	int prime(int i);
	void order(int *p,int j);
	int a[10],i,j,b[10]={0};
	for(i=0,j=0;i<10;i++)
	{
		scanf("%d",&a[i]);
		if(prime(a[i]))
		{
			b[j]=a[i];
			j++;
		}
	}
	if(j==0)  printf("No prime");
	else
	{
		order(b,j);
		for(i=0;b[i]!=0;i++)  printf("%d ",b[i]);
	}
}

int prime(int i)
{
	int j;
	if(i==1)  return 0;
	else if(i==2||i==3)  return 1;
	else
	{
		for(j=2;j<=sqrt(i);j++)
			if(i%j==0)  break;
		if(j>sqrt(i))  return 1;
		else  return 0;
	}
}

void order(int *p,int j)
{
	int *s=p,i,t;
	for(i=0;i<j-1;i++)
	{
		for(p=s+1;p<s+j-i;p++)
		{
			if(*p<*(p-1))
			{
				t=*p;
				*p=*(p-1);
				*(p-1)=t;
			}
		}
	}
}
