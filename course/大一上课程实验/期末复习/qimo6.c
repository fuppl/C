#include <stdio.h>
int zhi(int n)
{
    int i;
    for(i=1;i<n;i++)
    {
        if(i!=1&&n%i==0) break;
    }
    if(i>=n) return 1;
    else return 0;
}
int main()
{
    int n,a[100],i,j,t;
    while(scanf("%d",&n)!=-1)
    {for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(j=0,t=1;j<n;j++)
    {
        if(zhi(a[j])==1) t*=a[j];
    }
    if(t!=1) printf("%d\n",t);
    else printf("0");}
    return 0;

}
