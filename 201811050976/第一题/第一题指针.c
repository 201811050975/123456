#include <stdio.h>
int main()

{
	void Fun(int x, int y, int* p);
	int a, b, c;

	scanf_s("%d,%d", &a, &b);

	Fun(a, b, &c);

	printf("%d\n", c);

	return 0;

}
void Fun(int x, int y, int* p)
{
	int a1, a2, b1, b2;
	a1 = x / 10;
	a2 = x % 10;
	b1 = y / 10;
	b2 = y % 10;
	*p = a2 * 1000 + b2 * 100 + a1 * 10 + b1;
}