#include<stdio.h>
int main()
{
	int x,a[5]={0},i,j;
	scanf("%d",&x);
	a[0]=x/10000;
	a[1]=(x-10000*a[0])/1000;
	a[2]=(x-10000*a[0]-1000*a[1])/100;
	a[3]=(x-10000*a[0]-1000*a[1]-100*a[2])/10;
	a[4]=x-10000*a[0]-1000*a[1]-100*a[2]-10*a[3];
	for(i=0;i<5;i++)
		if(a[i]!=0)
		{
			for(j=4;j>=i;j--)  printf("%d",a[j]);
			break;
		}
	return 0;
}
