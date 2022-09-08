#include<stdio.h>
#include<math.h>
int main()
{
	int i,n;//m为累加变量

	double m,sum;
	
	scanf("%d",&n);

	sum=1;

	for(i=2;i<=n;i++)
	{
		if(i%2==0)
			m=1.00/i;
		else
			m=-1.00/i;
		


		sum=sum+m;
	}

	printf("%.3f",sum);
	return 0;
}