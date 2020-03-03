#include <stdio.h>
int main()
{
    int n,i,jc;
    while(scanf("%d",&n)!=-1)
    {
        if(n==0||n==1)
        {
            jc=1;
            printf("%d\n",jc);
        }
        else
        {
            for(jc=1,i=1;i<=n;i++)
            {
                jc=jc*i;
            }
            printf("%d\n",jc);
        }
    }
    return 0;
}
