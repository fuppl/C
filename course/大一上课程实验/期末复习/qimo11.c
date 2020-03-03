#include <stdio.h>
int main()
{
    int a[100],n,i,s;
    scanf("%d",&n);
    for(i=0,s=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]%2==1) s+=a[i];
    }
    printf("%d",s);
    return 0;
}
