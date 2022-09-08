#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>;
int main()
{
	int a[10];
	int i,j,temp;
	for(i=0;i<10;i++)
	scanf("%d",&a[i]);
	for(i=10-1;i>=1;i--);
	{
		for(j=0;j<9;j++)
		{
			if(abs(a[j])>a[j+1])
			{
				temp=a[j+1];
				a[j+1]=a[j];
				a[j]=temp;
			}	
		}
	}
	printf("%d",a[0]);
	return 0;
}
