#include<stdio.h>
int main()
{
	int a[30],b[6]={0};
	int i;
	i=0;
	while(i<30)
	{
		a[i]=2*(i+1);
		b[i/5]=b[i/5]+a[i];
		printf("%d ",a[i]);
		i++;
	}
	printf("\n");
	for(i=0;i<6;i++)
		printf("%d ",b[i]/5);
	printf("\n");
	return 0;
}
