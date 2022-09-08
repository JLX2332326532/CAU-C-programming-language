#include<stdio.h>
void Sort(int a[],int n)
{
	int i,j,t;
	for(i=1;i<n;i++)
	{
		for(j=1;j<n-i+1;j++)
		{
			if(a[j-1]>a[j])
			{
				t=a[j-1];
				a[j-1]=a[j];
				a[j]=t;
			}
		}
	}
}

//StudybarCommentBegin
int main()
{
	int a[7],i;
	for(i=0;i<7;i++)
		scanf("%d",&a[i]);
	Sort(a,7);
	for(i=0;i<7;i++)
		printf("%d ",a[i]);
	return 0;
}
//StudybarCommentEnd