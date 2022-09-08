#include<stdio.h>
int main()
{
	int n,i,even=0,odd=0,total=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		total+=i;
		if(i%2==0)  even+=i;
		else  odd+=i;
	}
	printf("%d\n%d\n%d",even,odd,total);
	return 0;
}