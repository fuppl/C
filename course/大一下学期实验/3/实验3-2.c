#include <stdio.h>
int main()
{
    int a[1000],x,n,i;
    while(scanf("%d",&n)!=-1)
    {
        scanf("%d",&x);
        for(i=0; i<n; i++)
        {
            scanf("%d",&a[i]);
            if(a[i]>=x)
                printf("%d ",a[i]);

        }
    }
    return 0;
}
