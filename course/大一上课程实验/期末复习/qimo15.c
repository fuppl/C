#include <stdio.h>
int main()
{
    int a[100],n,mx,i;
    while(scanf("%d",&n)!=-1)
    {
        mx=0;
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
            if(a[i]>mx) mx=a[i];
        }
        printf("%d\n",mx);
    }
}
