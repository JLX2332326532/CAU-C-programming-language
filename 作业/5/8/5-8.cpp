#include<stdio.h>
#include<string.h>
int main()
{
	char a[10],b[10],c[10];
	scanf("%s%s%s",a,b,c);
	if(strcmp(a,b)<0) strcpy(a,b);
	if(strcmp(a,c)<0) strcpy(a,c);
	printf("%s",a);
	return 0;
}
