#include<stdio.h>
double add(double a,double b);
int main()
{
	double a,b,sum;
	scanf("%lf%lf",&a,&b);
	sum=add(a,b);
	printf("%.2lf",sum);
	return 0;
}
double add(double a,double b)
{

	return(a+b);
}