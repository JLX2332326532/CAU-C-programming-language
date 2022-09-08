#include<stdio.h>
int main()
{
	int a[17],b[17]={7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
	int c[11]={0,1,2,3,4,5,6,7,8,9,10};
	char s[11]={1,0,0,9,8,7,6,5,4,3,2};
	int i,j,n=0;
	for(i=0;i<17;i++)
	{
	   scanf("%1d",&a[i]);
	   n=n+a[i]*b[i];
	}
	j=n%11;
	for(i=0;i<11;i++)
	{
		if(c[i]==j&&j!=2) 
		{
			printf("%d\n",s[i]);
			break;
		}
	}
	
	if(j==2)	printf("X");
	
	return 0;

}

