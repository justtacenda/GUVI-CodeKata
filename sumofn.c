//Sum of Natural Numbers upto N
#include<stdio.h>
int main()
{
	int n,itr,sum;
	sum=0;
	scanf("%d",&n);
	for(itr=1;itr<=n;itr++)
	{
		sum=sum+itr;
	}
	printf("%d",sum);
	return 0;
}
