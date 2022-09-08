#include<stdio.h>
#include<math.h>
int prime(int n)
{
	int i,a;
	a=sqrt(n);
	for(i=2;i<=a;i++)
		if(n%i==0)  break;
	if(i<=a)  return 0;
	else  return 1;
}

//StudybarCommentBegin
int main()
{
	int i,num,bool;
	scanf("%d",&num);
	bool=prime(num);
	if(bool==1)  printf("%s","yes");
	else  printf("%s","no");
	return 0;
}
//StudybarCommentEnd
