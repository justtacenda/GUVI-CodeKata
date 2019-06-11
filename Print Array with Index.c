//print array with its index
#include<stdio.h>
int main()
{
	int size,itr;
	scanf("%d",&size);
	int arr[size];
	for(itr=0;itr<size;itr++)
	{
		scanf("%d",&arr[itr]);
	}
	for(itr=0;itr<size;itr++)
	{
		printf("%d %d\n",arr[itr],itr);
	}
	return 0;
}
