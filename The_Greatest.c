#include <stdio.h>
#include <math.h>
int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    int MaiorAB = (a + b + abs(a - b)) / 2;
    int maior = (MaiorAB + c + abs(MaiorAB - c)) / 2;
    printf("%d", maior);
    printf(" eh o maior");
    return 0;
}