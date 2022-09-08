#include<stdio.h>
#include<math.h>
int main()
{
	int n,i,m;
	m=1;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
		m=i*m;
	printf("%d",m);
	return 0;
}
