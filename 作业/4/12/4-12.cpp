#include<stdio.h>
#include<math.h>
int main(void)
{
	int i,j,k,n,m,a,b,c;
	char d,e;
	d='+';
	e=65;

	for(i=1;i<=9;i++)
	{
		for(j=1;j<11-i;j++)
			printf("%c",d);
		for(k=1;k<=2*i-1;k++)
		{
		printf("%c",e);
		e=e+1;
		if(e==91)
			e=e-26;
		}
		for(j=1;j<11-i;j++)
			printf("%c",d);
		printf("\n");
	}

	for(i=1;i<=8;i++)
	{
		for(j=1;j<=i+1;j++)
			printf("%c",d);
		for(k=1;k<=17-2*i;k++)
		{
		printf("%c",e);
		e=e+1;
		if(e==91)
			e=e-26;
		}
		for(j=1;j<=i+1;j++)
			printf("%c",d);
		printf("\n");
	}

	return 0;
}

