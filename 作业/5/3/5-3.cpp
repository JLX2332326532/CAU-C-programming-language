#include<stdio.h>
#include<math.h>
int main(void)
{
	int a[10];
	int i,j,temp;

	for(i=0;i<=9;i++)
	{
		scanf("%d",&a[i]);
	}

	for(i=0;i<10-1;++i)
	{
		for(j=0;j<10-1-i;++j)
		{
			if(a[j]>a[j+1]) 
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}

	for(i=0;i<=9;i++)
		printf("%d ",a[i]);

	return 0;
}