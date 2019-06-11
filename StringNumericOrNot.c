//Check if a String is Numeric
#include<stdio.h>
int main()
{
	char s[1000];
	int len,itr,flag;
	flag=0;
	scanf("%s",s);
	for(len=0;s[len];len++);
	for(itr=0;itr<len;itr++)
	{
		if((s[itr]>='0'&&s[itr]<='9')||s[itr]=='.')
		{
			flag=0;
		}
		else
		{
			flag=1;
			break;
		}
	}
	if(flag==0)
	{
		printf("yes");
	}
	else
	{
		printf("no");
	}
	
}
