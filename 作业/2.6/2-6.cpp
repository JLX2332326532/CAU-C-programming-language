#include<stdio.h>
#include<math.h>

int main()
{
	double p,l,V,M,x,pi,r;
	scanf("%lf",&l);
	r=l/2;
	pi=3.141592657;
	p=11340;
	r=r*0.01;
	x=pow(r,3);
	V=(4.0/3.0)*pi*x;
	M=p*V;
	printf("%f",M);
	return 0;
}
