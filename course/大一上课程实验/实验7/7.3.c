#include <stdio.h>
int main()
{
    int n,i,x;
    double pi,s;
    scanf("%d",&n);
    if(n%2==0)
    {x=n/2;
    for(i=1,pi=1;i<=x;i++)
    {
        s=(2*i*1.0/(2*i-1))*(2*i*1.0/(2*i+1));
        //printf()
        pi*=s;

    }
    printf("%f",2*pi);}
    else
     {x=n/2;
    for(i=1,pi=1;i<=x;i++)
    {
        s=(2*i*1.0/(2*i-1))*(2*i*1.0/(2*i+1));
        //printf()
        pi*=s;

    }pi+=(2*(i+1)*1.0/(2*i+1));
    printf("%.6f",2*pi);}
    return 0;
}
