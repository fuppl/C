#include <stdio.h>
int main()
{
    int n,a,s=0;
    scanf("%d",&n);
    while(n>0)
    {
        a=n%10;
        n/=10;
        s+=a;
    }
    printf("%d",s);

}
