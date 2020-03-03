#include <stdio.h>
typedef struct pjj
{
    long long n;
    char c[20];
    float a,b,h,d,pj,z;
} S;
int main()
{
    S a[100];
    int n,i;
    while(scanf("%d",&n)!=-1)
    {
        for(i=0; i<n; i++)
        {
            scanf("%lld%s%f%f%f%f",&a[i].n,&a[i].c,&a[i].a,&a[i].b,&a[i].h,&a[i].d);
            a[i].pj=(a[i].a+a[i].b+a[i].h+a[i].d)/4;
            a[i].z=(a[i].a+a[i].b+a[i].h+a[i].d);
        }
        for(i=0; i<n; i++)
        {
            printf("%lld %s %.2f %.2f\n",a[i].n,a[i].c,a[i].z,a[i].pj);
        }
    }
}
