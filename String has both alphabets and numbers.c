//Check if String contains both alphabets and numbers
#include<stdio.h>
#include<ctype.h>
int main()
{
	char str[1000];
	int i,len,a_flag,n_flag;
	a_flag=0,n_flag=0;
	scanf("%[^\n]",str);
	for(len=0;str[len];len++);
	for(i=0;i<len;i++)
	{
		if(isalpha(str[i]))
		a_flag=1;
		else if(isdigit(str[i]))
		n_flag=1;
	}
	if(a_flag&&n_flag)
	printf("yes");
	else
	printf("no");
	return 0;
}
