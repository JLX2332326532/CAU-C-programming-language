#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	int a ,n,sum=0,i,j,k;
	int *p;
	scanf("%d%d",&a,&n);
	p=(int*)malloc(n*sizeof(int));
	for(i=0;i<n;i++)
	{
		for(j=0,k=0;j<=i;j++)
		{
			k=k+pow(10,j);
		}
		p[i]=a*k;
		sum=sum+p[i];
	}
	printf("%d",sum);
	return 0;
	
	
}
