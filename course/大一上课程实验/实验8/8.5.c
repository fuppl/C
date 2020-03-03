#include <stdio.h>
int main()
{
    int a[100],b[100],i,j,x;
    int n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    b[n-1]=a[1];
    b[n-2]=a[0];
    for(j=0;j<n-2;j++)
    {
        b[j]=a[j+2];
    }
    for(x=0;x<n;x++)
    {
        printf("%d ",b[x]);
    }
    return 0;
}
