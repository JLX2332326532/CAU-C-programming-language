#include<stdio.h>
#include<math.h>
int main()
{
	double sum=0,k=1;
	int i;
	for(i=1;fabs(1.0/k)>0.0001||sum==0;i++)
	{
		if(i%2==1)	sum=sum+1.0/k;
		else	sum=sum-1.0/k;
		k++;
	}
	
	printf("%.6lf",sum);
	return 0;
	
}
