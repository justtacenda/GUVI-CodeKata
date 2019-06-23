//Print String in lexicographical order
#include<stdio.h>
int main()
{
	char s[1000],temp;
	int i,j,len;
	scanf("%s",s);
	for(len=0;s[len];len++);
	for(i=0;i<len;i++)
	{
		for(j=i+1;j<len;j++)
		{
			if(s[i]>s[j])
			{
				s[i]=s[i]+s[j]-(s[j]=s[i]);
			}
		}
	}
	printf("%s",s);
	return 0;
}
