#include <stdio.h>

int main()
{
    int N,minute,second,hour,totalminute;
    scanf("%d",&N);
    minute =N/60;
    second=N%60;
    hour=minute/60;
    minute=minute%60;
    printf("%d:%d:%d\n",hour,minute,second);
    return 0;
}