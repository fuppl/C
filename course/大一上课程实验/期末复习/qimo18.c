#include <stdio.h>
int main()
{
    int n,a[100],m,mx,i;
    scanf("%d",&n);
    for(i=0,mx=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]>mx)
        {
            mx=a[i];
            m=i;
        }
    }
    printf("%d %d\n",mx,m);
}
