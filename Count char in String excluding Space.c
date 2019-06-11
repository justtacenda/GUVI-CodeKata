//Count the number of characters in a String without counting space
#include<stdio.h>
int main()
{
	char s[1000];
	int itr,len,count;
	count=0;
	scanf("%[^\n]",s);
	
	for(len=0;s[len];len++);
	for(itr=0;itr<len;itr++)
	{
		if(s[itr]!=' ')
		{
			count++;
		}
	}
	printf("%d",count);
	return 0;
}
