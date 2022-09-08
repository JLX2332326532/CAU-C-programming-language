#include<stdio.h>
#include<math.h>

int main()
{
	double p,l,V,M,x,pi;
	pi=3.141592657;
	p=11340; l=0.098;
	l=l/2;
	x=pow(l,3);
	V=(4.0/3.0)*pi*x;
	M=p*V;
	printf("%f",M);
	return 0;
}

