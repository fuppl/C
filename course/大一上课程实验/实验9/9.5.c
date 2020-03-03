#include <stdio.h>
int main()
{
    int i,j,k,n,m,a[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&m);
    if(m>n) printf("0");
    else
    {
        for(j=m-1;j<n;j++)
        {
            a[j]=a[j+1];
        }
        for(k=0;k<n-1;k++)
        {
            printf("%d ",a[k]);
        }
    }
    return 0;
}
