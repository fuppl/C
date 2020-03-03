#include <stdio.h>
int main()
{
    int n,a[5],i,j,k;
    while(scanf("%d",&n)!=-1)
    {for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    for(j=n;j<5;j++)
    {
        printf("%d ",a[j]);
    }
    for(k=0;k<n;k++)
    {
        printf("%d ",a[k]);
    }}
}
