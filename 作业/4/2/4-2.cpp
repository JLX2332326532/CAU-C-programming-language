#include<stdio.h>
#include<math.h>
int main()
{
	int i,x,a;
	scanf("%d",&x);
	for(i=1;i<=x;i++)
	{
		a=i*i%391;
		if(a==13) printf("%d ",i);
	}
	return 0;
}