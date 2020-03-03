#include <stdio.h>
typedef struct pjj
{
    long long n;
    char c[25];
    float cj;
}S;
int main()
{
    int n,i,yx=0,jg=0,bjg=0;
    S a[100];
    scanf("%d",&n);
    for(i=0,yx=0,jg=0,bjg=0;i<n;i++)
    {
        scanf("%lld%s%f",&a[i].n,&a[i].c,&a[i].cj);
        if(a[i].cj>=80) yx++;
        else if(a[i].cj<80&&a[i].cj>=60) jg++;
        else bjg++;
    }
    printf("%d %d %d",yx,jg,bjg);
}
