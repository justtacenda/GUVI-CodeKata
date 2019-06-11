//Check whether a given character is an alphabet or not
#include<stdio.h>
int main()
{
	char c;
	scanf("%c",&c);
	if((c>64&&c<91)||(c>96&&c<123))
	{
		printf("Alphabet");
	}
	else
	{
		printf("No");
	}
	return 0;
}
