//Print two Strings - one odd other even positions
#include<stdio.h>
int main()
{
	char str[1000],first[500],second[500];
	int i,len,odd,even;
	odd=0,even=0;
	scanf("%s",str);
	for(len=0;str[len];len++);
	for(i=0;i<len;i++)
	{
		if(i&1)
		{
			second[even++]=str[i];
		}
		else
		{
			first[odd++]=str[i];
		}
	}
	printf("%s %s",first,second);
	return 0;
}
