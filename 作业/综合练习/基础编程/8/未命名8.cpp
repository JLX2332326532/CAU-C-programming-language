#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
int r(int n)
{
	if((n%4==0&&n%100!=0)||n%400==0)	return 1;
	else	return 0;
}
int k(int a,int b,int c)
{
	if(a==1)	return b;
	if(a==2)	return b+31;
	if(a>2&&a%2==1)
	{
		
		if(c==0) return (a-3)/2*61+31+28+b;
		else	return (a-3)/2*61+31+29+b;
	}
	else
	{
		if(c==0) return (a-4)/2*61+31+28+b+31;
		else	return (a-4)/2*61+31+29+b+31;		
	}
}
int main()
{
	int y,m,d,day,blue,i;
	scanf("%d%d%d",&y,&m,&d);
	blue=r(y);
	day=k(m,d,blue);
	for(i=1;i<y-1990;i++)
	{
		if(r(1990+i-1)==0)	day+=365;
		else	day+=366;
	}
	day+=1;
	if(day%5==1||day%5==2||day%5==3)
	{
		printf("He was fishing at that day.");
	}
	else
	{
		printf("He was sleeping at that day.");
	}
	return 0;
	
}
