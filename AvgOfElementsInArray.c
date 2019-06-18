//Average of elements in an array
#include<stdio.h>
main()
{
	int i,n,sum;
	sum=0;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
		sum+=arr[i];
	}
	printf("%d",sum/n);
}
