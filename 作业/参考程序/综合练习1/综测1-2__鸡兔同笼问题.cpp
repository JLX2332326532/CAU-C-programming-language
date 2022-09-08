#include<stdio.h>
int main()
{
	int head,feet,chicken,rabbit;
	scanf("%d%d",&head,&feet);
	rabbit=(feet-2*head)/2;
	chicken=head-rabbit;
	printf("%d %d",chicken,rabbit);
}