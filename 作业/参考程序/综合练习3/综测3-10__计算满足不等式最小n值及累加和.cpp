/*
#include<stdio.h>
int main()
{
	int fun(double *p);
    double sum=0;
    double *p=&sum;
    int n;
    n=fun(p);
    printf("%d\n%lf\n",n,*p);
    return 0;
}
*/

int fun(double *p)
{
	int i;
	for(i=1;;i++)
	{
		*p=*p+1.0/i;
		if(*p>5)
		{
			return i;
			break;
		}
	}
}

 
 
