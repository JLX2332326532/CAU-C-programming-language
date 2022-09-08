#include<stdio.h>
#include<math.h>
int main()
{
	int e,b,c,d,i,j,t;
	scanf("%d,%d,%d,%d",&e,&b,&c,&d);
	int a[4]={e,b,c,d};
	for(j=0;j<=3;j++)
	 for(i=0;i<=3-j;i++)
		 if (a[i]>a[i+1]) 
		 {t=a[i];
		 a[i]=a[i+1];
		 a[i+1]=t;
		 }
	for(i=0;i<3;i++)
		printf("%d,",a[i]);
	printf("%d",a[3]);
	return 0;
}

