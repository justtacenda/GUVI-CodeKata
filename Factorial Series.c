//Factorial Series
#include<stdio.h>
int main()
{
	int n,fact,i;
	fact = 1;
 	scanf("%d",&n);
 	for(i=1;i<=n;i++)
	{	  	
		fact*=i;
		printf("%d ",fact);
	}
	return 0 ;
}

