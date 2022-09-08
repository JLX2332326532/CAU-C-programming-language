
/*
#include <stdio.h>
int main()
{
	int prime(int n);
    int num, a;
    do
	{
		scanf("%d",&num);
	} 
	while(num<=6||num%2==1);
    for(a=2;a<=num/2+1;a++)
    if(prime(a)&&prime(num-a))
    printf("%d=%d+%d\n",num,a,num-a);
    return 0;
}
*/

int prime(int n)
{
	int i;
	for(i=2;i<n;i++)
	{
		if(n%i==0)
			break;
	}
	if(i>=n)
		return 1;
	else
		return 0;
}