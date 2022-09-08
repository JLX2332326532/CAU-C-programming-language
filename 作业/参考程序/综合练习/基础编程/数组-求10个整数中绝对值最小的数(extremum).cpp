#include<stdio.h>
#include<math.h>
int main()
{
	int i,imin=0,a[10],min,absmin;
	for(i=0;i<10;i++)  scanf("%d",&a[i]);
	min=a[0];
	absmin=abs(a[0]);
	for(i=0;i<10;i++)
	{
		if(abs(a[i])<absmin)
		{
			absmin=abs(a[i]);
			imin=i;
		}
	}
	printf("%d",a[imin]);
	return 0;
}

