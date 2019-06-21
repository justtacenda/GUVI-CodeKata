//Sum of first n natural numbers
#include<stdio.h>
main()
{
	int num,itr;
	long long int sum;
	sum=0;
	scanf("%d",&num);
	for(itr=1;itr<=num;itr++)
	{
		sum+=itr;
	}
	printf("%lld",sum);
}
