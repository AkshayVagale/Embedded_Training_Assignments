 //write question here
#include<stdio.h>


int main()
{	
	int x = 10, y = 3;
	{
		int x = 100, z = 10;
		printf("%d %d", x, z);
	}
	printf("%d %d", x, z); // this will through error that z is undeclared
 }


