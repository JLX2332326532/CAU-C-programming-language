#include<stdio.h>
int main()
{
	int a[10],i,max,submax;
	for(i=0;i<10;i++)  scanf("%d",&a[i]);
	max=a[0];
	submax=a[1];
	for(i=1;i<10;i++)
	{
		if(a[i]>max)
		{
			submax=max;
			max=a[i];
		}
		else if(a[i]>submax)  submax=a[i];
	}
	printf("%d %d",max,submax);
}

