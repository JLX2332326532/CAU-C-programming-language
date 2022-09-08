#include<stdio.h>
int main()
{
	int a[5][5],i,j;
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			a[i][j]=5*i+j+1;
			if(j<=i)
				printf("%4d",a[i][j]);
		}
		printf("\n");
	}
}
