#include<stdio.h>
#include<math.h>
int main()
{
	int a;
	char x;
	scanf("%d",&a);
	if (a>=90) 
		x='A';
	else
	{if (a<60)
		x='C';
	else
		x='B';}
	printf("%d belongs to %c.",a,x);
	return 0;
}
