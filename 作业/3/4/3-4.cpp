#include<stdio.h>
#include<math.h>
int main()
{
	int x,b,c,i,y;
	scanf("%d%d%d",&x,&b,&c);
	int a[]={x,b,c};
	for(i=0;i<3;i++)
	{y=a[i];
	if (y%2==1) printf("%d is odd number!\n",a[i]);}
	return 0;
}
	
