#include<stdio.h>
int main()
{
	int x,i,d=0,a[99]={0};
	for(i=1;i<100;i++)
	{
		if(i*i==i||i*i%10==i||i*i%100==i)
		{
			a[i]++;
		    	if(d==0)  printf("%d",i);
		    	else  printf(" %d",i);
		    	d++;
		}
	}
	printf("\n");
	return 0;
}

