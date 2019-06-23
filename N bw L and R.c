//Check if n is between L and R
#include<stdio.h>
int main()
{
	int n,l,r;
	scanf("%d\n%d %d",&n,&l,&r);
	n>l&&n<r?printf("yes"):printf("no");
	return 0;
}
