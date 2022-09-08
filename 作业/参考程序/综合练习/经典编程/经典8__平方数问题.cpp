#include<stdio.h>
#include<math.h>
int main()
{
	void doublesquare(int n);
	int num;
	scanf("%d",&num);
	doublesquare(num);
	return 0;
}

void doublesquare(int n)
{
	int judge(int n);
	int i,d=0;
	for(i=1;i<=n;i++)
		if(judge(i))
		{
			d++;
			if(d==1)  printf("%d",i);
			else  printf(" %d",i);
		}
}

int judge(int n)
{
	int square(int x);
	if(square(n+100)&&square(n+268))  return 1;
	else  return 0;
}

int square(int x)
{
	int i;
	for(i=1;i<=sqrt(x);i++)
		if(i==sqrt(x))
		{
			return 1;
			break;
		}
	if(i!=sqrt(x))  return 0;
}
	
