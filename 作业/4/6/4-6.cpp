#include<stdio.h>
#include<math.h>
int main(void)
{
	int n1,n2,i,n,m;/*n1为上一项，n2为这一项，n为循环次数，m为暂存变量*/

	scanf("%d",&n);

	n1=1;
	n2=1;

	for(i=1;i<n;i++)
	{
		m=n1;
		n1=n2;
		n2=n2+m;
	}

	printf("%d",n1);

	return 0;
}


