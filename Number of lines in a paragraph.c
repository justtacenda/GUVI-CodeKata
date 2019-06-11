//Count the Number of lines in a paragraph
#include<stdio.h>
int main()
{
	char str[10000];
	int itr,count;
	count=0;
	scanf("%[^\n]",str);
	for(itr=0;str[itr];itr++)
	{
		if(str[itr]=='.')
		{
			count++;
		}
	}
	printf("%d",count+1);
}
