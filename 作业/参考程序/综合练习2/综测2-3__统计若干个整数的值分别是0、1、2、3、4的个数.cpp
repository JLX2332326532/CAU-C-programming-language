#include<stdio.h>
int main()
{
	void sta(int x,int *p0,int *p1,int *p2,int *p3,int *p4);
	int a[50]={-1},d0=0,d1=0,d2=0,d3=0,d4=0,*p0=&d0,*p1=&d1,*p2=&d2,*p3=&d3,*p4=&d4,i;
	for(i=0;i<50;i++)
	{
		scanf("%d",&a[i]);
		if(a[i]==-1)
			break;
		else
			sta(a[i],p0,p1,p2,p3,p4);
	}
	printf("0:%d\n1:%d\n2:%d\n3:%d\n4:%d\n",d0,d1,d2,d3,d4);
	return 0;
}

void sta(int x,int *p0,int *p1,int *p2,int *p3,int *p4)
{
	switch(x)
	{
		case 0:(*p0)++;break;
		case 1:(*p1)++;break;
		case 2:(*p2)++;break;
		case 3:(*p3)++;break;
		case 4:(*p4)++;break;
	};
}




