#include <stdio.h>
int main()
{
    int n,s,i,x,js=0;
    scanf("%d",&n);
    for(x=1;x<=n;x++)
    {
        for(s=0,i=1;i<x;i++)
        {
            if(x%i==0)
                s+=i;
        }
        if(x==s)
            {printf("%d ",x);
            js++;}
    }
    if(js==0)
    {
        printf("0");
    }
    return 0;
}
