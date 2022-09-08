#include<stdio.h>
#include<math.h>
int main(void)
{
	double a[10],aver;
	int i,num;

	aver=0;
	num=0;

	for(i=0;i<=9;i++)
	{
		scanf("%lf",&a[i]);
	}

	for(i=0;i<=9;i++)
	{
		aver=a[i]+aver;
	}
	
	aver=aver/10.0;


	for(i=0;i<=9;i++)
	{
		if(a[i]>aver) num++;



	}

	printf("%d",num);

	return 0;
}



