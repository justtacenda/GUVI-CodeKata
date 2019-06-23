//Print numbers from the AlphaNumeric String
#include<stdio.h>
int main()
{
	int i,len;
	char s[1000];
	scanf("%s",s);
	for(len=0;s[len];len++);
	for(i=0;i<len;i++)
	if(s[i]>='0'&&s[i]<='9')
	printf("%c",s[i]);
	else
	printf("");	
	return 0;
}
