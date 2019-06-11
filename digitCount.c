//Number of digits in a number
#include<stdio.h>
int main()
{
	int num,digitCount;
	digitCount=0;
	scanf("%d",&num);
	while(num)
	{
		digitCount++;
		num/=10;
	}
	printf("%d",digitCount);
	return 0;
}
