#include<stdio.h>
#include<math.h>
int main()
{
	int i,n;
	n=0;
	for(i=1;i<=100;i++)
		n=i+n;
	printf("%d",n);
	return 0;
}