//StudybarCommentBegin
#include<stdio.h>
int main() 
{
	void pascals_triangle(int n);
	int n; 
	scanf("%d",&n);
	pascals_triangle(n);
	return 0;
}
//StudybarCommentEnd

void pascals_triangle(int n)
{
	int a[10][10]={0},i,j;
	for(i=0;i<n;i++)
	{
		if(i==0)
		{
			a[i][0]=1;
			continue;
		}
		for(j=0;j<=i;j++)
		{
			if(j==0)  a[i][j]=1;
			else  a[i][j]=a[i-1][j-1]+a[i-1][j];
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[i][j]==0)  break;
			else  printf("%5d",a[i][j]);
		}
		printf("\n");
	}
}