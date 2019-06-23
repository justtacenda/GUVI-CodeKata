//Print odd digits in a number
#include<stdio.h>
void printDigit(int n)
{   
    if (n < 0)
        n = -1*n;
    if (n/10 > 0)
        printDigit(n/10);  
	if(n&1==1)          
    printf("%d ",n%10);
}
int main()
{
	int num;
	scanf("%d",&num);
	printDigit(num); 
	return 0;
}
