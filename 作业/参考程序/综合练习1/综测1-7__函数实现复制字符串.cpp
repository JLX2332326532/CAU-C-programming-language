/*
#include<stdio.h>
#include<string.h>
int main()
{

	 int m;
     void copystr(char *,char*, int);
     char str1[80],str2[80];
     gets(str2);
     scanf("%d",&m);
     if(strlen(str2)<m) printf("error!");
     else
	 { 
		 copystr(str1,str2,m);
         printf("%s",str1);
	 }
     return 0;
}
*/

void copystr(char *a,char *b,int m)
{
	for(b=b+m-1;(*a=*b)!='\0';a++,b++);
}
