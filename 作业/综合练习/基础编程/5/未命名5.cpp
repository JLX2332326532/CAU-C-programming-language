#include<stdio.h>
#include<string.h>
int main()
{
	double d,p;
	scanf("%lf",&d);
	
	if(d<=240)	p=d*0.53;
	if(240<d<=400)	p=(d-240)*0.58+240*0.53;
	if(400<d)	p=(d-400)*0.83+(400-240)*0.58+240*0.53;
	
	printf("%.2lf",p);
	
	return 0; 
}
