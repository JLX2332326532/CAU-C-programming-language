#include<stdio.h>
int main()
{
	int i,k=0;
	char a[100],d,m,n,s='a',t='b';
	scanf("%s",a);
	d=a[0];
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]>d)
		{
			k=i;
			d=a[i];
		}
	}
	for(i=k+1;s!='\0'&&t!='\0';i+=2)
	{
		m=a[i];
		n=a[i+1];
		a[i]=s;
		a[i+1]=t;
		s=m;
		t=n;
	}
	a[i]=s;
	a[i+1]=t;
	printf("%s",a);
}


