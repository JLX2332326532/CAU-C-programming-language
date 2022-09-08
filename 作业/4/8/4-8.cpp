#include<stdio.h>
#include<math.h>
int main(void)
{
	int i,n,sum,j,x,y;

	scanf("%d",&n);
	sum=0;
	x=10;

	for(i=1;i>0;i++)
	{
		j=n%x;
	
		y=n/x;

		sum=sum+j/(x/10);


		x=x*10;
			if(j==n) break;
	}

	printf("count=%d\nsum=%d",i,sum);
	return 0;
}



		