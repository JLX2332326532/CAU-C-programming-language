#include<stdio.h>
#include<math.h>
int main(void)
{
	int i,a,b,c,x,y,z,n,m;

	scanf("%d",&n);

	if (n<3)
	{
		m=1;
		printf("%d",m);
	}
	else
	{
		x=1;
		y=1;
		z=1;

		for(i=1;i<=n-3;i++)
		{
			a=x;
			b=y;
			c=z;

			x=b;
			y=c;
			z=a+b+c;
		}
	printf("%d",z);
	}
	
	return 0;
}

