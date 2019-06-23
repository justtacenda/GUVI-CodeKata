//String - palindrome or not
#include<stdio.h>
int main()
{
	char str[1000];
	scanf("%s",str);
	int len,i,j;
	for(len=0;str[len];len++);
	for(i=0,j=len-1;i<len,j>=0;i++,j--)
	{
		if(str[i]==str[j])
		{
		}
		else
		break;
	}
	if(i==len)
	printf("yes");
	else 
	printf("no");
	
	
	return 0;
}
