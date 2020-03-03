#include <stdio.h>
#include <math.h>
int main()
{
    int x,i,k;
    scanf("%d",&x);
    k=sqrt(x);
    if(x==1)
     printf("No");
    if(x>=2)
    {
        for(i=2;i<=k;i++)
        if(x%i==0) break;
        if(i>=k+1) printf("Yes");
        else
         printf("No");
    }

    return 0;
}
