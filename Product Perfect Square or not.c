//Product of M and N perfect square or not
#include<stdio.h>
#include<math.h>
int main()
{
	float n,m,sqr;
	scanf("%f %f",&n,&m);
	sqr=sqrt(n*m);
	if(sqr-floor(sqr)==0)
	printf("yes");
	else
	printf("no");
	return 0;
}
