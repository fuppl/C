#include <stdio.h>
#include <math.h>
int main()
{
    int n,mx,mn,s=0,i=0;
    float pj;
    scanf("%d",&n);
    mx=mn=n;
    while(n!=-999)
    {
     i++;
     s=s+n;

     if(n>=mx)
        mx=n;
     if(n<=mn)
        mn=n;
        scanf("%d",&n);
    }
    pj=s*1.0/i;
    printf("%d %d %.2f",mx,mn,pj);
    return 0;
}
