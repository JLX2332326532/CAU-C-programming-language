#include<stdio.h>
#include<math.h>
int main ()
{
	int i,a,b,c,d;
	for(i=100;i<1000;i++)
	{
		a=i/100;
		b=(i-a*100)/10;
		c=(i-a*100-b*10)/1;
		d=a*a*a+b*b*b+c*c*c;
		if (i==d) printf("%d\n",i);
	}
	return 0;
}