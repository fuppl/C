#include <stdio.h>
int main()
{
    int n,a,s=0,i=1;
    scanf("%d",&n);
    while(i<=n)
    {
        a=n%i;
        if(a==0)
        {
            s=s+i;
        }i++;
    }
    printf("%d",s);
    return 0;
}
