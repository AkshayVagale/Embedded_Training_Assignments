/* Program to print N to 1 using recursion */ 
#include<stdio.h>

void printNto1(int);

int main()
{
	int num;
	printf("Enter the Number: ");
	scanf_s("%d", &num);
	printNto1(num);

		return 0;
}

void printNto1(int n)
{
	if (n == 0)
		return;
	
	printf("%d\t", n);
	printNto1(n - 1);

}


