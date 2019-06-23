//Check if String has vowel in it
#include<stdio.h>
int main()
{
	char str[1000];
	int i,len;
	scanf("%s",str);
	for(len=0;str[len];len++);
	for(i=0;i<len;i++)
	{
		if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
		{
			printf("yes");
			break;
		}
	}
	if(i==len)
	printf("no");
	return 0;
}
