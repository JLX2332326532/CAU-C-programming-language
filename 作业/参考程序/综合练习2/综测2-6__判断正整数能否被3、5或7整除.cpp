#include<stdio.h>
int main()
{
	int f(int i,int n);
	int n,f3,f5,f7;
	scanf("%d",&n);
	printf("%d:",n);
/*	if(f(3,n)&&f(5,n)+f(7,n))
		printf("%d,",f(3,n));
	else if(f(3,n))
		printf("%d\n",f(3,n));
	if(f(5,n)&&f(7,n))
		printf("%d,",f(5,n));
	else if(f(5,n))
		printf("%d\n",f(5,n));
	if(f(7,n))
		printf("%d\n",f(7,n));
	if(f(3,n)==0&&f(5,n)==0&&f(7,n)==0)
		printf("no\n");*/
	f3=f(3,n);
	f5=f(5,n);
	f7=f(7,n);
	if(f3&&f5&&f7)
		printf("%d,%d,%d\n",f3,f5,f7);
	else if(f3&&f5)
		printf("%d,%d\n",f3,f5);
	else if(f5&&f7)
		printf("%d,%d\n",f5,f7);
	else if(f3&&f7)
		printf("%d,%d\n",f3,f7);
	else if(f3)
		printf("%d\n",f3);
	else if(f5)
		printf("%d\n",f5);
	else if(f7)
		printf("%d\n",f7);
	else
		printf("no\n");
	return 0;
}

int f(int i,int n)
{
	if(n%i==0)
		return i;
	else 
		return 0;
}
