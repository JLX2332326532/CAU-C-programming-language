#include<stdio.h>
int gcd(int x,int y)		//���Լ��
{
	int i;
	for(i=x;;i--)
		if(x%i==0&&y%i==0)  break;
	return i;
}

int main()
{
	int x,y,a,b;
	scanf("%d%d",&x,&y);
	a=gcd(x,y);
	b=x*y/a;		//��С������
	printf("%d %d\n",a,b);
	return 0;
}