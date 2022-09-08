#include<stdio.h>
#include<math.h>
int main()
{
	double a,b,c,max;
	scanf("%lf%lf%lf",&a,&b,&c);
	if (a>b)
		max=a;
	else
		max=b;
	if (c>max) max=c;
	printf("%.2lf",max);
	return 0;
}