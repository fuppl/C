#include <stdio.h>
#include <math.h>
int main()
{
    int n,m,i;
    float t,s;
    scanf("%d",&n);
    for(i=1,s=0;i<=n;i++)
    {
        m=pow(-1,i+1);
        t=m*1.0/i;
        s+=t;
    }
    printf("%.3f",s);
    return 0;
}
