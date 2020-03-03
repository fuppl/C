#include <stdio.h>
typedef struct ppp
{
    long long n;
    double cj;
} S;
int main()
{
    int n,i;
    double s;
    S a[100];
    while(scanf("%d",&n)!=-1)
    {
        for(i=0; i<n; i++)
        {
            scanf("%lld%lf",&a[i].n,&a[i].cj);
        }
        for(s=0,i=0; i<n; i++)
        {
            s+=a[i].cj;
        }
        s=s/n;
        for(i=0; i<n; i++)
        {
            if(a[i].cj>s)
            {
                printf("%8lld %.1f\n",a[i].n,a[i].cj);
            }
        }
    }
}
