//Count the Number of Numeric Characters in a String
#include<stdio.h>
int main()
{
	char str[10000];
	int itr,count;
	count=0;
	scanf("%[^\n]",str);
	for(itr=0;str[itr];itr++)
	{
		if(str[itr]>='0'&&str[itr]<='9')
		{
			count++;
		}
	}
	printf("%d",count);
}
