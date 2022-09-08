#include<stdio.h>
int main()
{
	int y,m,d,i,day=1;
	scanf("%d%d%d",&y,&m,&d);
	if(y!=1990)
		for(i=1990;i<y;i++)
			if((i%4==0&&(i%100)!=0)||i%400==0)  day+=366;
			else  day+=365;
	if(m!=1)
		for(i=1;i<m;i++)
			if(i==2)
				if((y%4==0&&(y%100)!=0)||y%400==0)  day+=29;
				else  day+=28;
			else if(i==1||i==3||i==5||i==7||i==8||i==10||i==12)  day+=31;
			else  day+=30;
	if(d!=1)  day+=d-1;
	if(day%5==1||day%5==2||day%5==3)  printf("He was fishing at that day.");
	else  printf("He was sleeping at that day.");
	return 0;
}


