/*
#include<stdio.h>
#define SIZE 20
int main()
{
	int digital_char(char *p);
    char string[SIZE];
    int n;
    gets(string);
    n=digital_char(string);
    printf("%d",n);
    return 0;
}
*/
int digital_char(char *p)
{
	char *a=p;
	int t=0;
	for(;p<a+SIZE;p++)
	{
		if(*p=='\0')
			break;
		else
		{
			if(*p>=48&&*p<=57)
				t++;
		}
	}
	return t;
}
