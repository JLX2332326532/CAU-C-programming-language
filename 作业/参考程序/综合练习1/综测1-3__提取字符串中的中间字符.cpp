#include<stdio.h>
#include<string.h>
int main()
{
	char *center(char a[]);
	char a[100];
	gets(a);
	puts(center(a));
}

char *center(char a[])
{
	int d=strlen(a);
	if(d%2==0)
	{
		a[d/2+1]='\0';
		return a+d/2-1;
	}
	else
	{
		a[(d+1)/2]='\0';
		return a+(d-1)/2;
	}
}
	