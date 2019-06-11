//Time Format
#include<stdio.h>
int main()
{
	int hr1,hr2,min1,min2;
	scanf("%d %d\n%d %d",&hr1,&min1,&hr2,&min2);
	if(hr1>hr2)
	{
		hr1=hr1-hr2;
	}
	else
	{
		hr1=hr2-hr1;
	}
	if(min1>min2)
	{
		min1=min1-min2;
	}
	else
	{
		min1=min2-min1;
	}
	printf("%d %d",hr1,min1);
	
	return 0;
}
