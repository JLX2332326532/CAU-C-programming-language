#include<stdio.h>
#include<math.h>

int main()
{
	double p,l,V,M,x,pi,r,v;
	scanf("%lf",&l);
	r=l/2;
	pi=3.141592657;
	p=11340;
	r=r*0.01;
	x=pow(r,3);
	V=(4.0/3.0)*pi*x;
	scanf("%lf",&l);
	r=l/2;
	pi=3.141592657;
	p=11340;
	r=r*0.01;
	x=pow(r,3);
	v=(4.0/3.0)*pi*x;
	M=p*(V-v);
	printf("%f",M);
	return 0;
}	