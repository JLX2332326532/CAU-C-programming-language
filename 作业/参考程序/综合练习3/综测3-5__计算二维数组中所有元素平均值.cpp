/*
#include<stdio.h>
#define M 2
#define N 3
int main()
{
	double mean(double a[M][N],int m,int n);
    double a[M][N]={1,2,3,4,5,6};
    printf("%lf",mean(a,2,3));
    return 0;
} 
*/
 
double mean(double a[M][N],int m,int n)
{
	int i;
	double sum=0;
	for(i=0;i<m*n;i++)
	{
		sum=sum+*(a[0]+i);
	}
	return sum/(m*n);
}
