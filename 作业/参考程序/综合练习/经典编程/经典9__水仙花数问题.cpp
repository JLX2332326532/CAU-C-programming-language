#include<stdio.h>
#include<math.h>
int main()
{
	void save(int n,int a[]);
	int i,d=0,n,a[3];
	for(i=100;i<1000;i++)
	{
		save(i,a);
		if(pow(a[0],3)+pow(a[1],3)+pow(a[2],3)==i)
		{
			d++;
			if(d==1)  printf("%d",i);
			else  printf(" %d",i);
		}
	}
	return 0;
}

void save(int n,int a[])
{
	a[0]=n/100;
	a[1]=(n-100*a[0])/10;
	a[2]=n-a[0]*100-a[1]*10;
}