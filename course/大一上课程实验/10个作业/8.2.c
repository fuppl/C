#include <stdio.h>
#include <math.h>
int main()
{
    float x,y,jl,i,mn;
    for(i=0.1,mn=5;i<10;i=i+0.01)
    {
        y=sqrt(54/i);
        jl=i*i+y*y;
        if(jl<mn)
            mn=jl;
    }
    printf("%.2f",mn);
}
