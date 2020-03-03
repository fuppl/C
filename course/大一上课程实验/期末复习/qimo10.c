#include <stdio.h>
int main()
{
    int n,a,s;
    scanf("%d",&n);
    s=0;
    while(n>0)
    {
        a=n%10;
        n=n/10;
        if(a%2==1) s+=a;
    }
    printf("%d",s);
}
