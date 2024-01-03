#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a, b, c;
	int result;
	printf("Input width, height, depth : ");
	scanf("%d%d%d", &a, &b, &c);
	result = 4 * (a - 2) + 4 * (b - 2) + 4 * (c - 2);
	printf("Result : %d\n", result);
}	