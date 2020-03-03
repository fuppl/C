#include <stdio.h>
int main()
{
    int a[10],n,ma,mi,i;
    while(scanf("%d",&n)!=-1)
    {
        scanf("%d%d",&mi,&ma);
        for(i=0; i<n; i++)
        {
            scanf("%d",&a[i]);
            if(a[i]>=mi&&a[i]<=ma)
            {
                break;
            }
        }
        if(i<n) printf("1 %d\n",a[i]);
        else printf("0 %d\n",a[i-1]);
    }
    return 0;
}
