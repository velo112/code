#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n;
	int result;

	printf("Input a 5-bit bianary number: ");
	scanf("%d", &n);
	result = n / 10000 * 16 + (n % 10000) / 1000 * 8 + (n % 1000) / 100 * 4 + (n % 100) / 10 * 2 + (n % 10);
	printf("The binary number %d is a decimal number %d\n", n, result);
}