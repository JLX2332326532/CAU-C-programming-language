#include<stdio.h>
int main()
{
	int i,j,k;
	char a[100],b[1001];

	scanf("%s%s",a,b);

	for(i=0;a[i]!='\0';i++)
		;

	for(j=0;b[j]!='\0';j++)
		a[i+j]=b[j];

	a[i+j]='\0';

	printf("%s",a);

	return 0;
}