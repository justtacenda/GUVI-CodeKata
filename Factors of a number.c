//Factors of a number
#include<stdio.h>
int main()
{
	int num,itr,sqr;
	scanf("%d",&num);
	sqr=num/2
	for(itr=1;itr<=sqr;itr++)
	{
		if(num%itr==0)
		printf("%d ",itr);
	}
	printf("%d",num);
	return 0;
}
