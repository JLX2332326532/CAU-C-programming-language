/*
#include<stdio.h>
#include<string.h>
int main()
{
	void output(char *q);
    char x[20];
    gets(x);
    output(x);
    return 0;
}
*/

void output(char *q)
{
	char *a=q;
	for(;q<a+20;q+=2)
	{
		if(*q=='\0')
			break;
		putchar(*q);
		if(*(q+1)=='\0')
			break;
	}
}

