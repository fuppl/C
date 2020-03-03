#include <stdio.h>
void maopao(float a[],int n)
{
    int i,j,t;
    for(j=1;j<n;j++)
    {
        for(i=0;i<n-j;i++)
        {
            if(a[i]>a[i+1])
            {
                t=a[i];
                a[i]=a[i+1];
                a[i+1]=t;
            }
        }
    }
}
int main()
{
    float a[10],b[10];
    int i,j,k;
    for(i=0;i<10;i++)
    {
        scanf("%f",&a[i]);
    }
    maopao(a,10);
    for(j=0;j<10;j++)
    {
        b[j]=a[10-j-1];
    }
    for(k=0;k<10;k++)
    {
        printf("%.1f ",b[k]);
    }
}
