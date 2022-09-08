#include<stdio.h>
#include<math.h>
int main(void)
{
	int a[10];
	int i;

	for(i=0;i<=9;i++)
		scanf("%d",&a[i]);

	for(i=0;i<=8;i++)
	{
		if(abs(a[i])<abs(a[i+1])) a[i+1]=a[i];
	}


	printf("%d",a[9]);

	return 0;
}





