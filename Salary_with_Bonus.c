#include <stdio.h>
int main()
{
    char name[100];
    double a, b, TOTAL;
    scanf("%s", name);
    scanf("%lf %lf", &a, &b);
    TOTAL = a + ((b * 15) / 100);
    printf("TOTAL = R$ %.2lf\n", TOTAL);
    return 0;
}