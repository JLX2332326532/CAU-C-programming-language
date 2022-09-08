#include<stdio.h>
#include<math.h>
int main()
{
	int year;
	char leap;
	scanf("%d",&year);
	if((year%4==0&&year%100!=0)||(year%400==0))
		leap='y';
	else
		leap='n';
	printf("%c",leap);
	return 0;
}
	
