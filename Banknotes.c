#include <stdio.h>
int main()
{
    int n, ans, remining;
    scanf("%d", &n);
    printf("%d\n", n);
    ans = n / 100;
    printf("%d nota(s) de R$ 100,00\n", ans);
    remining = n % 100;
    ans = remining / 50;
    printf("%d nota(s) de R$ 50,00\n", ans);
    remining = remining % 50;
    ans = remining / 20;
    printf("%d nota(s) de R$ 20,00\n", ans);
    remining = remining % 20;
    ans = remining / 10;
    printf("%d nota(s) de R$ 10,00\n", ans);
    remining = remining % 10;
    ans = remining / 5;
    printf("%d nota(s) de R$ 5,00\n", ans);
    remining = remining % 5;
    ans = remining / 2;
    printf("%d nota(s) de R$ 2,00\n", ans);
    remining = remining % 2;
    ans = remining / 1;
    printf("%d nota(s) de R$ 1,00\n", ans);

    return 0;
}