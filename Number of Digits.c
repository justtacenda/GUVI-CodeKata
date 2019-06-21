//Number of digits in a number
#include<stdio.h>
main()
{
	int num,count;
	count=0;
	scanf("%d",&num);
	while(num)
	{
		count++;
		num/=10;
	}
	printf("%d",count);
}
