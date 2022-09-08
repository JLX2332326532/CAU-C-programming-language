//StudybarCommentBegin
#include<stdio.h>
int main( ) 
{
	int palindrome(int x);
	int x,pnum; 
	scanf("%d",&x); 
	pnum=palindrome(x);
	printf("%d",pnum);
	return 0;
}
//StudybarCommentEnd
 
 
int palindrome(int x)
{
	int a[5]={0},i,j,n=0;
	a[0]=x/10000;
	a[1]=(x-10000*a[0])/1000;
	a[2]=(x-10000*a[0]-1000*a[1])/100;
	a[3]=(x-10000*a[0]-1000*a[1]-100*a[2])/10;
	a[4]=x-10000*a[0]-1000*a[1]-100*a[2]-10*a[3];
	for(i=0;i<5;i++)
	{
		if(a[i]!=0)
		{
			for(j=4;j>=i;j--)  n=10*n+a[j];
			break;
		}
	}
	return n;
}
