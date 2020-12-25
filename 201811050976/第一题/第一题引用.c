#include <stdio.h>
int main()
{
    int fun(int x, int y);
    int a, b, c;
    scanf_s("%d,%d", &a, &b);
    c = fun(a, b);
    printf("%d", c);
    return 0;
}
int fun(int x, int y)
{
    int a1, a2, b1, b2;
    a1 = x / 10;
    a2 = x % 10;
    b1 = y / 10;
    b2 = y % 10;
    int t;
    t = a2 * 1000 + b2 * 100 + a1 * 10 + b1;
    return t;
}