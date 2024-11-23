#include <stdio.h>
int main()
{
    double sT, aV, d;
    scanf("%lf %lf", &sT, &aV);
    d = sT * aV;
    double fS= d / 12;
    printf("%.3lf\n", fS);
    return 0;
}