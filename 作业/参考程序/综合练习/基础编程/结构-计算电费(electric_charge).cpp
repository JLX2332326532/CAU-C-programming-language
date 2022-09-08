#include<stdio.h>
int main()
{
	double n,price;
	scanf("%lf",&n);
	if(n<=240)  price=n*0.53;
	else if(n<=400)  price=240*0.53+(n-240)*(0.53+0.05);
	else  price=240*0.53+160*0.58+(n-400)*0.83;
	printf("%.2f",price);
	return 0;
}