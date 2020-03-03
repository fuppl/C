#include <stdio.h>
int qiuhe(int n)
{
    int zhi,i,s,flag;
    for(zhi=1,s=0;zhi<=n;zhi++)
    {
        for(i=2,flag=0;i<zhi;i++)
        {
            if(zhi%i==0) flag=1;
        }
        if(flag==0) s+=zhi;
    }
    return s-1;
}
int main()
{
    int n,t;
    while(scanf("%d",&n)!=-1)
    {t=qiuhe(n);
    printf("%d\n",t);}
    return 0;
}
