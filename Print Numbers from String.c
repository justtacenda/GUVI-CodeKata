//Print numbers from the AlphaNumeric String
#include<stdio.h>
int main()
{
	int i,len,flag;
	flag=0;
	char s[1000];
	scanf("%s",s);
	for(len=0;s[len];len++);
	for(i=0;i<len;i++)
	if(s[i]>='0'&&s[i]<='9')
	{
		printf("%c",s[i]);
		flag=1;
	}
	if(flag==0)
		printf(" ");
	return 0;
}
