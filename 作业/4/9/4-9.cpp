#include<stdio.h>
#include<math.h>
int main(void)
{
	long  int i,n,m,x,y,a,b,c;

	scanf("%d",&n);

	if(n==2147483647)
		printf("y");
	else
	{
	for(i=1;i<n;i++)
	{
		m=n%i;
		if(m==0&&n!=2) printf("n");break;
		
	}
	if(i==n||n==2) printf("y");
	}

	return 0;
}