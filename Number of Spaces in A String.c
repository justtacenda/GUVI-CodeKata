//Count Number of Spaces in a String input
#include<stdio.h>
int main()
{
	char str[10000];
	int itr,count;
	count=0;
	scanf("%[^\n]",str);
	for(itr=0;str[itr];itr++)
	{
		if(str[itr]==' ')
		{
			count++;
		}
	}
	printf("%d",count);
}
