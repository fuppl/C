#include <stdio.h>
int wan(int n)
{
    int i,s,wan;
    for(i=1,s=0;i<n;i++)
    {
        if(n%i==0) s+=i;
    }

    if(s==n) {wan=n; return wan;};
    if(s!=n) return 0;
}
int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=2;i<=n;i++)
    {
        wan(i);
        if(wan(i)!=0)
        printf("%d ",wan(i));
    }
    return 0;
}
