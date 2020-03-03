#include <stdio.h>
#include <math.h>
double pi(int n)
{
    double jg,s;
    int i,t;
    for(i=1,s=0;i<=n;i++)
    {
        t=pow(-1,i+1);
        jg=4*1.0/(2*i-1)*t;
        s+=jg;
    }
    return s;
}

int main()
{
    int n,i;
    double pai;
    while(scanf("%d",&n)!=-1)
    {pai=pi(n);
    printf("%.10f\n",pai);
    }
}
