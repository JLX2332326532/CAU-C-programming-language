#include<stdio.h>
int main(void)
{
	char a[100],b[100],t;
	int i,j,k;
	scanf("%s",a);
	j=0;

	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'||a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U')
		{
			b[j]=a[i];
		j++;
		}
	}
	b[j]='\0';	
	for(i=0;i<j-1;i++)	
	{
		for(k=0;k<j-i-1;k++)
			if(b[k]>b[k+1])
			{
				t=b[k];
				b[k]=b[k+1];
				b[k+1]=t;
			}
	}

	printf("%s",b);
	return 0;
}



