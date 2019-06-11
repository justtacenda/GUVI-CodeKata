//Maximum Number in an array
#include<stdio.h>
#include<limits.h>
int main()
{
	int size,itr;
	scanf("%d",&size);
	int arr[size],max=INT_MIN;
	for(itr=0;itr<size;itr++)
	{
		scanf("%d",&arr[itr]);
		if(arr[itr]>max)
		{
			max=arr[itr];
		}
	}
	printf("%d",max);
	return 0;
}
