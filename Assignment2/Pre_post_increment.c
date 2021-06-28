
//write question
#include<stdio.h>


int main()
{
	int x, a = 2, b = 1;

	x = (a++ && (!b) && b || ++a);
	printf("x =%d\n", x); // x = 1
}
