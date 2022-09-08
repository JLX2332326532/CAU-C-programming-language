#include<stdio.h>
#include<math.h>
int main()
{
	double area,p,a,b,c;
	scanf("%lf%lf%lf",&a,&b,&c);
	p=(a+b+c)/2;
	area=p*(p-a)*(p-b)*(p-c);
	printf("%.2f",area);
	return 0;
}