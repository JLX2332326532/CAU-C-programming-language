//StudybarCommentBegin
#include<stdio.h>
int main()
{
	int f(int x);
	int n;
	scanf("%d",&n);
	printf("%d\n",f(n));
	return 0;
}
//StudybarCommentEnd
int f(int x)
{
	int i;
	int a[100];
	a[0]=1;
	a[1]=1;

	for(i=3;i<=x;i++)
	{
		a[i-1]=a[i-2]+a[i-3];
	}

	return a[x-1];
}
