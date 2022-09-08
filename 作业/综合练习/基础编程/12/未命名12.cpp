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
	int i,j;
	for(i=0;s[i]!='\0';i++)
	{
		if(('a'<=s[i]&&s[i]<='z')||('A'<=s[i]&&s[i]<='Z'));
		else
		{
			for(j=i;s[j]!='\0';j++)
			{
				*s(j)=*s(j+1);
			} 
		}		
	}

}

