#include<stdio.h>
#include<math.h>
int main()
{
	int i;
	double sum=0,d=1;
	for(i=1;1.0/i>=1e-4;i++)
	{
		sum+=d*1.0/i;
		d*=-1;
	}
	sum+=d*1.0/i;
	printf("%.6f",sum);
	return 0;
}
