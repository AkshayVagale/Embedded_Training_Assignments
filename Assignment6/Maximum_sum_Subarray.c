/* Program to find the Maximum sum of Subarray */

#include<stdio.h>
int main()
{
	int array[20] = { 0 }, size=0, sum=0,max=0,sub_arr_s=0, sub_arr_e=0;
	printf("Enter the no of element :");
	scanf_s("%d", &size);
	printf("Enter the element :\n");
	
	for (int i = 0;i < size;i++)
	{
		scanf_s("%d", &array[i]);
	}
	
	printf("Array :  ");
	for (int i = 0;i < size;i++)
	{
		printf("%d\t", array[i]);
	}
	printf("\n");

	for (int i = 0;i < size;i++)
	{
		sum += array[i];
		if (sum <= 0)
		{
			sum = 0;
			sub_arr_s = i+1;

		}

		if (max < sum)
		{
			max= sum;
			sub_arr_e = i;
		}

	}
	printf("Max sum of sub array is : %d\n",max);
	printf("Sub Array :  ");
	for (int i = sub_arr_s;i <= sub_arr_e;i++)
	{
		printf("%d\t", array[i]);
	}

	return 0;
}
