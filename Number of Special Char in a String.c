//Count the Number of Special characters in a String
#include<stdio.h>
int main()
{
	char str[10000];
	int itr,count;
	count=0;
	scanf("%[^\n]",str);
	for(itr=0;str[itr];itr++)
	{
		if((str[itr]>=33&&str[itr]<=47)||(str[itr]>=58&&str[itr]<=64))
		{
			count++;
		}
	}
	printf("%d",count);
}
