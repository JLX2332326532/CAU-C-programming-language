#include<stdio.h>
#include<math.h>
int main(void)
{

	int a[20];
	int i,j,sum;
	sum=0;

	for(i=0;i<=19;i++)
		scanf("%d",&a[i]);

	for(i=0;i<=19;i++)
	{
		for(j=0;j<=19;j++)
		{
			if(i==j) continue;
			sum=a[i]%a[j];
			if(sum==0) 
			{
				printf("%d ",a[i]);
				break;
			}
		}
		

	}
	return 0;
}