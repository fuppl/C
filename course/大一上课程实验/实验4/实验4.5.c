//二进制转换成十进制//
#include <stdio.h>
#include <math.h>
int main()
{
    int x,sum,k,i,j,t;
    sum=0;i=0;
    scanf("%d",&x);
    while(x>0)
        {
           k=x%10;
           t=1;
           for(j=0;j<i;j++)
            t=t*2;
            sum=sum+k*t;
            x=x/10;
            i++;
        }
    printf("%d",sum);
    return 0;
}
