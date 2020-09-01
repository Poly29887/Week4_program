#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int row, keep, i, j;
	printf("Input : ");
	scanf("%d", &row);
	for (i = row - 1; i >= 1; i--)
	{
		for (j = 1; j <= row - i;j++)
		{
			printf("*");
		}
		keep = (2 * i) - 1;
		for (j = keep; j>=1;j--)
		{
			printf(" ");
		}
		for (j = 1; j <= row - i; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	keep = (2 * row) - 1;
	for (i = 1; i <= keep; i++)
	{
		printf("*");
	}
	printf("\n");
	for (i = 1; i <= row-1; i++)
	{
		for (j = 1; j <= row - i; j++)
		{
			printf("*");
		}
		keep = (2 * i) - 1;
		for (j = 1; j <= keep; j++)
		{
			printf(" ");
		}
		for (j = 1; j <= row - i; j++)
		{
			printf("*");
		}
		printf("\n");
	}
}