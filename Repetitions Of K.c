//Check repetitions of k
#include<stdio.h>
int main()
{
	int n,k,i,count;
	count=0;
	scanf("%d %d",&n,&k);
	int arr[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
		if(arr[i]==k)
		count++;
	}
	printf("%d",count);
	return 0;
}
