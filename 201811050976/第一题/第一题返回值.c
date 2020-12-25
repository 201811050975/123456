#include <stdio.h>
int main()
{
	int a, b, c;
	scanf_s("%d,%d", &a, &b);
	int a1, a2, b1, b2;
	a1 = a / 10;
	a2 = a % 10;
	b1 = b / 10;
	b2 = b % 10;
	c = a2 * 1000 + b2 * 100 + a1 * 10 + b1;
	printf("%d", c);
	return 0;
}