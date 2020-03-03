#include <stdio.h>
typedef struct pjj
{
    long long n;
    char c[20];
    double a,b,h,d,z;
} S;
int main()
{
    S a[100];
    int n,i,j;
    double ma;
    while(scanf("%d",&n)!=-1)
    {
        for(i=0; i<n; i++)
        {
            scanf("%lld%s%lf%lf%lf%lf",&a[i].n,&a[i].c,&a[i].a,&a[i].b,&a[i].h,&a[i].d);
            a[i].z=a[i].a+a[i].b+a[i].h+a[i].d;

        }
        for(i=0,j=0,ma=0;i<n;i++)
        {
            if(a[i].z>ma)
            {
                ma=a[i].z;
                j=i;
            }
        }
        printf("%lld %s\n",a[j].n,a[j].c);
    }
}
