//Factors of a number
#include<stdio.h>
#include<math.h>
int main()
{
	int num,itr,sqr;
	scanf("%d",&num);
	sqr=sqrt(num);
	for(itr=1;itr<=sqr;itr++)
	{
		if(num%itr==0)
		printf("%d ",itr);
	}
	printf("%d",num);
	return 0;
}
