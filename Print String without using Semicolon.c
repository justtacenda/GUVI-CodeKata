//Print without using Semicolon
#include<stdio.h>
int main()
{
	char str[1000];
	scanf("%[^\n]",str);
	if(printf("%s",str))
	{
	}
	return 0;
}
