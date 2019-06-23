//Print first K characters of a String
#include<stdio.h>
int main()
{
	char str[1000];
	int k,i;
	scanf("%s %d",str,&k);
	for(i=0;i<k;i++)
	{
		printf("%c",str[i]);
	}
	return 0;
}
