/*
#include<stdio.h>
int main()
{
 	int fun(int *p);
    int sum=0,n;
    int *p=&sum;
    n=fun(p);
    printf("%d\n%d\n",n,*p);
    return 0;
}

*/
int fun(int *p)
{
	int i;
	for(i=2;*p<1000;i+=2)
	{
		*p+=i*i;
	}
	i=i-2;
	*p-=i*i;
	return i-2;
}
