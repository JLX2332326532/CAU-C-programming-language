/*
#include<stdio.h>
int main()
{
	int product(int a[],int n);
    int a[6]={1,2,3,4,5,6};
    printf("%d",product(a,6));
    return 0;
}*/

int product(int a[],int n)
{
	int i,mul=1;
	for(i=0;i<n;i++)
	{
		mul=mul*a[i];
	}
	return mul;
}