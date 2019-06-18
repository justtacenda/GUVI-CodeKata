//Compare two Strings
#include<stdio.h>
#include<string.h>
int main()
{
	char s1[1000],s2[1000];
	int i,j,len1,len2,flag;
	scanf("%s %s",s1,s2);
	len1=strlen(s1),len2=strlen(s2);
	for(i=0;i<len1;i++)
	{
		flag=0;
		if(s1[i]==s2[i])
		{
			flag=1;
		}
		else if(s1[i]>s2[i])
		{
			flag=2;
			break;
		}
		else
		{
			flag=3;
			break;
		}
	}
	if(flag==2)
	{
		printf("%s",s1);
	}
	else if(flag==3)
	{
		printf("%s",s2);
	}
	else 
	{
		printf("%s",s1);
	}

	return 0;
}
