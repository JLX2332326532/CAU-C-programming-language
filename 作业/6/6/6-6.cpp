//StudybarCommentBegin
#include<stdio.h>
int main()
{
	double equation(double x,int n);
	int n;
	double x;
	scanf("%lf%d",&x,&n);
	printf("%.4f\n",equation(x,n));
	return 0;
}
//StudybarCommentEnd
double fact( int n)
{
	double x,i;
	x=-1;
	for(i=1;i<=n;i++)
		x=x*i*(-1);
	return x;
}

double mypow(double x,int n)
{
	double i,j=1;
	for(i=1;i<=n;i++)
		j=j*x;
	return j;
}

double equation(double x, int n)
{
	double sum,i;
	sum=0;
	for(i=1;i<=n;i++)
	{
		sum=sum+mypow(x,i)/fact(i);
	}
return sum;
}
