#include<stdio.h>
int main()
{
	int momo(int n);
	printf("%d",momo(1));
	return 0;
}

int momo(int n)
{
	if(n==10)  return 1;
	else  return (momo(n+1)+1)*2;
}