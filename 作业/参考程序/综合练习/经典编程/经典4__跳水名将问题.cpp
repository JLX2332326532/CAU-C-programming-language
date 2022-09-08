#include<stdio.h>
int main()
{
	int a,b,c,d,e;
	for(a=1;a<=5;a++)
	{
		for(b=1;b<=5;b++)
		{
			if(a==b)  continue;
			for(c=1;c<=5;c++)
			{
				if(a==c||b==c)  continue;
				for(d=1;d<=5;d++)
				{
					if(a==d||b==d||c==d)  continue;
					for(e=1;e<=5;e++)
					{
						if(a==e||b==e||c==e||d==e)  continue;
						if((b==2)+(a==3)==1&&(b==2)+(e==4)==1&&(c==1)+(d==2)==1&&(c==5)+(d==3)==1&&(e==4)+(a==1)==1)
						{
							printf("A:%d\nB:%d\nC:%d\nD:%d\nE:%d",a,b,c,d,e);
							break;
						}
					}
				}
			}
		}
	}
	return 0;
}
