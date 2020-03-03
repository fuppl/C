#include <stdio.h>
int main()
{
    int n,a,b,c,i,x=0;
    scanf("%d",&n);
    for(i=101;i<=n;i++)
    {
        a=i%10;
        b=i/10%10;
        c=i/100%10;
        if(i==a*a*a+b*b*b+c*c*c)
        {

           printf("%d ",i);
           x++;
        }


    }
    if(x==0)
        printf("0");

    return 0;
}
