#include<stdio.h>
#include<math.h>
int prime(int n)
{
	int i;
	for(i=2;i<=sqrt(n);i++)
		if(n%i==0)  break;
	if(i<=sqrt(n))  return 0;
	else  return 1;
}

int main()
{
	int i;
	for(i=101;i<500;i=i+2)
		if(prime(i))  printf("%d\n",i);
	return 0;
}
