//Sum of Arithmetic Progression till N terms given N,A,D
#include<stdio.h>
int main()
{
	int n,a,d,sum;
	scanf("%d %d %d",&n,&a,&d);
	sum=(n*(2*a+(n-1)*d))/2;
	printf("%d",sum);
	return 0;
}
