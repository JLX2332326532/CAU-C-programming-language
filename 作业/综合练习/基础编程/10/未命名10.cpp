#include<stdio.h>
int main()
{
	int a[10];
	int i,j,k;
	for(i=0;i<10;i++)
		scanf("%d",&a[i]);
	for(i=10-1;i>=1;i--)
	{
		for(j=0;j<i;j++)
		{
			if(a[j]>a[j+1])	
			{
				k=a[j];
				a[j]=a[j+1];
				a[j+1]=k;
			}
		}
	}
	printf("%d %d",a[9],a[8]);
	return 0;
}
