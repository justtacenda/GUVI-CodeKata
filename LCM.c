//LCM of 2 numbers
#include<stdio.h>
int main()
{
	int n,m,remainder,a,b;
	scanf("%d %d",&n,&m);
	a=n,b=m;
	while(1)
	{
		remainder=n%m;
		if(remainder==0) break;
		n=m;
		m=remainder;
	}
	printf("%d",(a*b)/m);
	return 0;
}
