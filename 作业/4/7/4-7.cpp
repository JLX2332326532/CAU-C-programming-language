#include<stdio.h>
#include<math.h>
int main(void)
{
	double x,y,sum,i,a,b,n;//xΪ���ӣ�yΪ��ĸ��sumΪ�ܺ�,aΪ����洢��ַ,nΪѭ������,bΪ��ĸ�ݴ��ַ

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
