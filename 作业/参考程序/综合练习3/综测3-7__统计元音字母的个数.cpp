#include<stdio.h>
int main()
{
	int sta(char a[]);
	char a[101];
	scanf("%s",a);
	printf("%d",sta(a));
}

int sta(char a[])
{
	int i,d=0;
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U'||a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u')
			d++;
	}
	return d;
}
