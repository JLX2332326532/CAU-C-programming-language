#include<stdio.h>
int main()
{
	char chg(int x);
	int i,j,k,t;
	for(t=1;t<=3;t++)
	{
		if(t==1)  continue;
		if(t==3)  continue;
		k=t;
	}
	for(t=1;t<=3;t++)
	{
		if(t==k)  continue;
		if(t==1)  continue;
		i=t;
	}
	for(t=1;t<=3;t++)
	{
		if(t==i)  continue;
		if(t==k)  continue;
		j=t;
	}
	printf("A-%c;B-%c;C-%c",chg(i),chg(j),chg(k));
	return 0;
}

char chg(int x)
{
	switch(x)
	{
		case 1:return 'X';break;
		case 2:return 'Y';break;
		case 3:return 'Z';break;
	}
}