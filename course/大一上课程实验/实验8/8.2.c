#include <stdio.h>
int main()
{
    int a[1000],i,x;
    for(i=2,a[0]=1,a[1]=1;i<1000;i++)
    {
        a[i]=(13*a[i-1]+15*a[i-2])%11;
    }
    while(scanf("%d",&x)!=-1)
    {
        printf("%d",a[x-1]);
    }
    return 0;
}
