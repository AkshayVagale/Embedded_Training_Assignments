/* Program to convert decimal to binary using recursion */
#include<stdio.h>

void decimalToBinary(int);

int main()
{
	int num;
	printf("Enter the Number:");  
	scanf_s("%d", &num);
	decimalToBinary(num);

		return 0;
}

void decimalToBinary(int n)
{
	if (n == 0)
		return;

	decimalToBinary(n/2);

	printf("%d", n%2);

}
