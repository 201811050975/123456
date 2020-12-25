#include <stdio.h>
#define MaxSize 25
void king(int m, int n)
{
    int p[MaxSize];
    int i, j, t;
    for (i = 0; i < m; i++)
        p[i] = 1;
    t = -1;
    printf("出列顺序:");
    for (i = 1; i <= m; i++)
    {
        j = 1;
        while (j <= n)
        {
            t = (t + 1) % m;
            if (p[t] == 1) j++;
        }
        p[t] = 0;
        printf("%d ", t + 1);
    }
    printf("\n");
    printf("编号为%d的猴子是大王", t + 1);
}
int main()
{
    int m, n;
    scanf_s("%d %d", &m, &n);
    king(m, n);
    return 0;
}
