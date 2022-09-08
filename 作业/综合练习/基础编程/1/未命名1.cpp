#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(void)
{
	int y;
	scanf("%d",&y);
	if((y%4==0&&y%100!=0)||y%400==0)	putchar('y');
	else	putchar('n');
	
	return 0;
}
