#include <stdio.h>
int main()
{
    int p1c, p1u, p2c, p2u;
    double p1p, p2p, p1tp, p2tp, total_price;
    scanf("%d %d %lf", &p1c, &p1u, &p1p);
    scanf("%d %d %lf", &p2c, &p2u, &p2p);
    p1tp = p1u * p1p;
    p2tp = p2u * p2p;
    total_price = p1tp + p2tp;
    printf("VALOR A PAGAR: R$ %.2lf\n", total_price);
    return 0;
}