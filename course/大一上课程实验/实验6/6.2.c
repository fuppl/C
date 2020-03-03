#include <stdio.h>
double ex(int n)
{
    double jg=0,d=0;
    int i,t;
    long jc;
    for(i=1,jc=1;i<=30;i++)
    {
        jc=i*jc;
        d=n*1.0/jc;
        jg+=d;
    }
    jg+=1;
    return jg;
}
int main()
{
    int n;
    double jg;
    while(scanf("%d",&n)!=-1)
    {
        jg=ex(n);
        printf("%f\n",jg);
    }
    return 0;
}
