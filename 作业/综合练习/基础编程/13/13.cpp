#include<stdio.h>
int prime(int n)
{
	int i;
	for(i=2;i<n;i++)
	{
		if(n%i==0) return 0;
	}
	return 1;
}
//StudybarCommentBegin
int main()
{
	int i,num,boo;
	scanf("%d",&num);
	boo=prime(num);
	if(boo==1)  printf("%s","yes");
	else  printf("%s","no");
	return 0;
}
//StudybarCommentEnd
