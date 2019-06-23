//GCD of 2 Numbers
#include<stdio.h>
int main()
{
	int n,m,remainder;
	scanf("%d %d",&n,&m);
	while(1)
	{
		remainder=n%m;
		if(remainder==0) break;
		n=m;
		m=remainder;
	}
	printf("%d",m);
	return 0;
}
