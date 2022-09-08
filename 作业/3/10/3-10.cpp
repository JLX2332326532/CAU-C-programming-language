#include<stdio.h>
#include<math.h>
int main()
{
	
	int year,y,b,c,i;
	scanf("%d,%d,%d",&year,&y,&b);
	int a[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	if((y>12||b>a[y-1])&&y!=2)
		printf("%s","data error.");
	else
	{
	
	c=0;
	for(i=0;i<y-1;i++)
		c=c+a[i];
	c=c+b;
	if(((year%4==0&&year%100!=0)||(year%400==0))&&y>2)c=c+1;
			
	
	printf("It is the %dth day.",c);
	}
	return 0;
}