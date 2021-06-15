#include<stdio.h>

int sumOfNum(int n);

int main()
{
	int num;
	printf("Enter the number :  ");
	scanf_s("%d", &num);

	printf("sum is : %d", sumOfNum(num));
	return 0;
}

int sumOfNum(int no)
{
	int sum = 0;

	while (no > 0)
	{
		sum += no % 10;
			no /= 10;
	}
	if (sum > 9)
	{
		sum = sumOfNum(sum);
	}
	
	return sum;
}
