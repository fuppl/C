#include <stdio.h>
int main()
{
    int a[50],i,x;
    for(i=2,a[0]=1,a[1]=1;i<50;i++)
    {
        a[i]=a[i-1]+a[i-2];
    }
    while(scanf("%d",&x)!=-1)
    {
        printf("%d",a[x-1]);
    }
    return 0;
}
