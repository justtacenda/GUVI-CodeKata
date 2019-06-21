//Sum of digits in a number
#include<stdio.h>
int main()
{
	int num,sum;
	sum=0;
	scanf("%d",&num);
	while(num)
	{
		sum+=num%10;
		num/=10;
	}
	printf("%d",sum);
	return 0;
}
