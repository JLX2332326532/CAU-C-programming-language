//StudybarCommentBegin
#include <stdio.h>
#include <string.h>
void main()
{
	void GetLetters(char *s);
	char str[100];
	gets(str);
	GetLetters(str);
	printf("%s",str); 
}
//StudybarCommentEnd

void GetLetters(char *s)
{
	char *a=s;
	for(;*s!='\0';s++)
	{
		if(((*s>='a'&&*s<='z')||(*s>='A'&&*s<='Z'))==0)
		{
			for(a=s;*(s-1)!='\0';s++)  *s=*(s+1);
			s=a-1;
		}
	}
}