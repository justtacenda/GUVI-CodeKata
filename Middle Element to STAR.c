//Change middle element to * 
#include<stdio.h>
int main()
{
	char str[1000];
	int len,i;
	scanf("%s",str);
	for(len=0;str[len];len++);
	if(len%2)
	{
		str[len/2]='*';
	}
	else
	{
		str[len/2]=str[(len/2)-1]='*';
	}
	printf("%s",str);
	return 0;
}
