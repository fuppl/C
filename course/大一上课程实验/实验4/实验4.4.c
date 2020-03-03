#include <stdio.h>
#include <math.h>
int main()
{
    int n,y,s=0,a;
    scanf("%d",&n);
    while(n>0)
    {
        y=n%10;
        n=n/10;
        a=y*y*y;
        s=s+a;
    }
    printf("%d",s);
    return 0;
}
