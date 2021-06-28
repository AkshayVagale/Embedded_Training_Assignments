/* Program to find if the array is sorted in ascending order or not */

#include<stdio.h>
int main()
{
	int array[100] = { 0 }, size,flag=1;
		printf("Enter the no of element :");
	scanf_s("%d", &size);
	printf("Enter the element :\n");
	for (int i = 0;i < size;i++)
	{
		scanf_s("%d", &array[i]);
	}

	for (int i = 0;i < size - 1;i++)
	{
		if (array[i] > array[i + 1])
		{
			printf(" Array is not sorted in ascending order");
			flag = 0;
			break;
		}
	}

	if(flag)
	printf(" Array is sorted in ascending order");

	return 0;
} 
