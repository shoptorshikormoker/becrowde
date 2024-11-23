#include <stdio.h>
int main()
{
    double x, y;
    scanf("%lf",&x);
    scanf("%lf",&y);
    double result = x / y;
    printf("%.3lf", result);
    printf(" km/l\n");
    return 0;
}
