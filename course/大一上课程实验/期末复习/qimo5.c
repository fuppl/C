#include <stdio.h>
int wan(int n)
{
    int i,s;
    for(i=1,s=0;i<n;i++)
    {
        if(n%i==0) s+=i;
    }
    if(s==n) return s;
    else return 0;
}
int main()
{
    int n,i,js;
    scanf("%d",&n);
    for(i=2,js=0;i<=n;i++)
    {
        if(wan(i)!=0)
        {
            printf("%d ",wan(i));js++;
        }
    }
    if(js==0) printf("0");
}
