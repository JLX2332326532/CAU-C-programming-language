#include<stdio.h>
int main()
{
	int gou(int n);
	int nana(int n);
	int n;
	scanf("%d",&n);
	if(gou(n)&&nana(n))
		printf("yes\n");
	else
		printf("no\n");
	return 0;
}

int gou(int n)
{
	if(n%5==0)
		return 1;
	else
		return 0;
}

int nana(int n)
{
	if(n%7==0)
		return 1;
	else 
		return 0;
}
