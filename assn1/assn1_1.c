#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char a, b, c;
	printf("Inpute your initials with white space: ");
	scanf("%c %c %c", &a, &b, &c);
	printf("ASCII code of your input: %d %d %d\n", a, b, c);
	a = ('A' <= a && a < 'Z') ? a + 32 : a;
	b = ('A' <= b && b < 'Z') ? b + 32 : b;
	c = ('A' <= c && c < 'Z') ? c + 32 : c;
	printf("Converted output : %c %c %c\n", a, b, c);
}