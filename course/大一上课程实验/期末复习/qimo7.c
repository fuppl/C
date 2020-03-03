#include <stdio.h>
int main()
{
    int n,a[100],i,j,js;
    while(scanf("%d",&n)!=-1)
    {for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(j=0,js=0;j<n;j++)
    {
        if(a[j]%2==0) js++;
    }
    printf("%d\n",js);}
    return 0;
}
