#include <stdio.h>

int main()
{
    int n,ans,r;
    scanf("%d",&n);
    ans =n/365;
    r=n%365;
    printf("%d",ans);
    printf(" ano(s)\n");
    ans =r/30;
    r=r%30;
    printf("%d",ans);
    printf(" mes(es)\n");
    printf("%d",r);
    printf(" dia(s)\n");
    return 0;
}