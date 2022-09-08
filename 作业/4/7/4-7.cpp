#include<stdio.h>
#include<math.h>
int main(void)
{
	double x,y,sum,i,a,b,n;//x为分子，y为分母，sum为总和,a为各项存储地址,n为循环次数,b为分母暂存地址

	scanf("%lf",&n);

	x=2;
	y=1;
	sum=0;

	for(i=1;i<=n;i++)
	{
		a=x/y;
		b=y;
		y=x;
		x=x+b;

		sum=sum+a;
	}
	
	printf("%.2lf",sum);
	return 0;
}
