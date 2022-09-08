#include<stdio.h>
int main()
{
	int m,n,mod,i,a,b,c;
	scanf("%d%d",&m,&n);
	if(n>m)
	{
		i=n;
		n=m;
		m=i;
	}
	
	for(i=0,a=m,b=n,mod=1;mod!=0;i++)
	{
		mod=m%n;

		if(mod!=0)
		{
			m=n;
			n=mod;
		}
	}
	
	c=a*b/n;
	
	printf("%d %d",n,c);
	return 0;
} 

