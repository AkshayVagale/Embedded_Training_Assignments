/* Program to find second largest no in array */


#include<stdio.h>


int main()
{
	int array[100] = { 0 }, size, largest = 0, s_largest = 0;
	printf("Enter the no of element :");
	scanf_s("%d", &size);
	printf("Enter the element :\n");
	for (int i = 0;i < size;i++)
	{
		scanf_s("%d", &array[i]);
	}

	for (int i = 0;i < size;i++)
	{
		if (array[i]>largest)
		{
			s_largest = largest;
			largest = array[i];
		}
		else if (array[i]>s_largest)
		{
			s_largest = array[i];
		}

	}

	printf("Second largest no is :%d\n", s_largest);
 
	return 0;
}
