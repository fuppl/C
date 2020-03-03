#include <stdio.h>
int main()
{
    int a[100],i,j,x,y,n,t,s,p;
    float w;
    scanf("%d",&n);
    for(x=0;x<n;x++)
    {
        scanf("%d",&a[x]);
    }
    for(j=1;j<=n-1;j++)
    {
        for(i=0;i<n-j;i++)
        {
            if(a[i]>a[i+1])
            {
                t=a[i];
                a[i]=a[i+1];
                a[i+1]=t;
            }
        }
    }

    for(y=1,s=0;y<n-1;y++)
    {
        s+=a[y];
    }
    w=s*1.0/(n-2);
    printf("%.2f",w);
    return 0;
}
