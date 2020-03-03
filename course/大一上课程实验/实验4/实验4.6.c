#include <stdio.h>
int main()
{
    int n,a,b,c,d,s;
    scanf("%d",&n);
    a=n%10;
    b=n/10%10;
    c=n/100%10;
    d=n/1000%10;
    a=(a+3)%10;
    b=(b+3)%10;
    c=(c+3)%10;
    d=(d+3)%10;
    s=d+c*10+b*100+a*1000;
    printf("%d",s);
    return 0;
}
