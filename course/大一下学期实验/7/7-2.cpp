#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n,m,i,k,cou;
    int *p;
    while(scanf("%d%d",&n,&m)!=-1)
    {k=0;cou=0;
    p=(int *)calloc(n,sizeof(int));
    for(i=0;i<n;i++)
      *(p+i)=999;
    while(cou<n-1)
    {
        for(i=0;i<n;i++)
        {
            if(*(p+i)!=0)
            {
                k++;
                if(k==m)
                {
                    *(p+i)=0;
                    cou++;
                    k=0;
                }

            }
            if(cou==n-1)
            break;
        }
    }
    for(i=0;i<n;i++)
    {
        if(*(p+i)!=0)
        printf("%d\n",i);
    }}
}
