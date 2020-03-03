//ÍÃ×ÓÊıÁĞ//
#include <stdio.h>
int shulie(int n)
{
    int i=0,j=1,k,m;
    for(i=0,j=1,m=1;m<n;m++)
    {
        k=j+i;
        i=j;
        j=k;
    }
    return k;
}
int main()
{
    int n;
    while(scanf("%d",&n)!=-1)
    {shulie(n);
    printf("%d\n",shulie(n));}
    return 0;
}
