#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct pu
{
    long long n;
    char c[20];
    float cj;
}S;
int main()
{
    S a[100];
    int n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%lld %s %f",&a[i].n,&a[i].c,&a[i].cj);
    }
    for(i=0;i<n;i++)
    {
        printf("%lld  %s  %.2f\n",a[i].n,a[i].c,a[i].cj);
    }
}
