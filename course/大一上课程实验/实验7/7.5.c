#include <stdio.h>
int jc(int x)
{
    int i,s;
    for(i=1,s=1;i<=x;i++)
    {
        s*=i;
    }
    return s;
}
int main()
{
    int m,n,c;
    scanf("%d%d",&m,&n);
    c=jc(m)/(jc(n)*jc(m-n));
    printf("%d",c);
}
