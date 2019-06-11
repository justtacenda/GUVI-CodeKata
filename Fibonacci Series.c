//Fibonacci Series
#include<stdio.h>
int main()
{
	int num,first,second,series,itr;
	first=0,second=1;
	scanf("%d",&num);
	printf("%d",second);
	for(itr=2;itr<=num;itr++)
	{
		series=first+second;
		printf(" %d",series);
		first=second;
		second=series;
	}
}
