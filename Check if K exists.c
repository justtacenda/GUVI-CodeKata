//Check if  K exists
#include<stdio.h>
main()
{
	int n,k,i,flag=0;
	scanf("%d %d",&n,&k);
	int arr[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
		if(arr[i]==k)
		{
			printf("yes");
			flag=1;
			break;
		}
	}
	if(flag==0)
	printf("no");
}
