#include<stdio.h>
void Sort(int a[],int n)
{
	int i,j,k;
	for(i=n-1;i>=1;i--)
	{
		for(j=0;j<i;j++)
		{
			if(a[j]>a[j+1])	
			{
				k=a[j];
				a[j]=a[j+1];
				a[j+1]=k;
			}
		}
	}

}                                   
//StudybarCommentBegin
int main()
{
	int a[7],i;
        for(i=0;i<7;i++)  scanf("%d",&a[i]);
        Sort(a,7);
        for(i=0;i<7;i++)  printf("%d ",a[i]);
        return 0;
}

//StudybarCommentEnd
