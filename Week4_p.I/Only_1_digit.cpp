#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int n,sum=0,keep = 0,digit=0;
		printf("Input : ");
		scanf("%d", &n);
		if (n >= 0)
		{
			sum = n;
			while (sum >= 10)
			{
				keep = sum;
				sum = 0;
				digit = 0;
				while (keep >= 0)
				{
					digit = keep % 10;
					sum += digit;
					if (keep < 10)
					{
						break;
					}

					keep = (keep - digit) / 10;
				}
			}
			printf("Output : %d\n", sum);
		}
}