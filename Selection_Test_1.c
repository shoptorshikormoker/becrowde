#include <stdio.h>
int main()
{
    int a, b, c, d, s1, s2;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    scanf("%d", &d);
    s1 = c + d;
    s2 = a + b;
    if (b > c && d > a && s1 > s2 && c >= 0 && d >= 0 && a % 2 == 0)
    {
        printf("Valores aceitos");
    }
    else
    {
        printf("Valores nao aceitos\n");
    }
    return 0;
}