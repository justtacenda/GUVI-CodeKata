//Check if String is binary
#include<stdio.h>
int main()
{
	char str[1000];
	int i,len,flag;
	flag=0;
	scanf("%s",str);
	for(len=0;str[len];len++);
	for(i=0;i<len;i++)
	{
		if(str[i]=='0'||str[i]=='1')
		{
		}
		else
		{
			flag=1;
			printf("no");
			break;
		}
	}
	if(flag==0)
	printf("yes");
}
