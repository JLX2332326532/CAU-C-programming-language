#include<stdio.h>
int main()
{
	int fab(int n);
	int i;
	for(i=1;i<=20;i++)
		if(i==1)  printf("%d",fab(i));
		else  printf(" %d",fab(i));
	return 0;
}

int fab(int n)
{
	if(n==1||n==2)  return 1;
	else  return fab(n-1)+fab(n-2);
}
