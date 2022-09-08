#include<stdio.h>
#include<math.h>
int main()
{
	double a,b,c,det,x1,x2;
	scanf("%lf%lf%lf",&a,&b,&c);
	det=b*b-4*a*c;
	if(a==0&&b==0) printf("Not an equation");
	if(a==0&&b!=0) {x1=-c/b;printf("%.2lf",x1);}
	if(a!=0)
	{
		if(det==0)
		{
			x1=-b/2*a;
			printf("%.2lf",x1);
		}
		else
		{
			if(det>0)
			{
				x1=(-b+sqrt(det))/2/a;
				x2=(-b-sqrt(det))/2/a;
				if(x1>x2)
				printf("%.2lf %.2lf",x1,x2);
				else
					printf("%.2lf %.2lf",x2,x1);

			}
			else
			{
				x1=-b/2/a;
				x2=-b/2/a;
				det=-det;
				det=fabs(sqrt(det)/2/a)
					;
				printf("%.2lf+%.2lfi %.2lf-%.2lfi\n",x1,det,x2,det);
			}
		}
	}



	return 0;
}
