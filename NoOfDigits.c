//Number of digits in a Number
#include<stdio.h>
main()
{
	long long int num;
	int count;
	count=0;
	scanf("%lld",&num);
	while(num)
	{
		count++;
		num/=10;
	}
	printf("%d",count);
}
