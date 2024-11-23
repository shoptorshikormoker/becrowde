#include <stdio.h>
#include<math.h>
int main()
{
    double px1, py1, px2, py2, a, b, c;
    scanf("%lf", &px1);
    scanf("%lf",&py1);
    scanf("%lf", &px2);
    scanf("%lf",&py2);
    a = (px2 - px1) * (px2 - px1);
    b = (py2 - py1) * (py2 - py1);
    c = a + b;
    c=sqrt(c);
    printf("%.4lf\n",c);
    return 0;
}
