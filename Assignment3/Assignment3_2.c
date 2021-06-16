/* Program to Print 1 to N using recursion */
#include<stdio.h>

void print1toN(int);

int main()
{
	int num;
	printf("Enter the Number:");
	scanf_s("%d", &num);
	print1toN(num);

		return 0;
}

void print1toN(int n)
{
	if (n == 0)
		return;
	print1toN(n - 1);
	printf("%d\t", n);

}
