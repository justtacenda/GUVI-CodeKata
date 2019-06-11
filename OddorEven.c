//Check whether a number is even or odd
#include<stdio.h>
int main()
{
	int num;
	scanf("%d",&num);
	if(num&1!=0)
	{
		printf("Odd");
	}
	else
	{
		printf("Even");
	}
	return 0;
}
