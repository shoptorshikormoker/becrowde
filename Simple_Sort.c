#include <stdio.h>

int main()
{
    int x, y, z;
    scanf("%d %d %d", &x, &y, &z);
    int x1 = x, y1 = y, z1 = z;
    int tem;
    if (x > y)
    {
        tem = x;
        x = y;
        y = tem;
    }
    if (x > z)
    {
        tem = x;
        x = z;
        z = tem;
    }
    if (y > z)
    {
        tem = y;
        y = z;
        z = tem;
    }

    printf("%d\n %d\n %d\n", x, y, z);
    printf("\n%d\n%d\n%d", x1, y1, z1);
    return 0;
}