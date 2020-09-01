#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int num1, num2, i, j,sum;
	printf("Input number1 : ");
	scanf("%d", &num1);
	printf("Input number2 : ");
	scanf("%d", &num2);
	if (num1 < num2)
	{
		for (i = num1; i <= num2; i++)
		{
			sum = 0;
			for (j = 1; j <= i-1; j++)
			{
				if (i % j == 0)
				{
					sum += j;
				}
			}
			if (i == sum)
			{
				printf("%d ", i);
			}
		}
	}
	else
	{
		for (i = num2; i <= num1; i++)
		{
			sum = 0;
			for (j = 1; j <= i-1; j++)
			{
				if (i % j == 0)
				{
					sum += j;
				}
			}
			if (i == sum)
			{
				printf("%d ", i);
			}
		}
	}
}