#include <stdio.h>
void maopao(int a[],int n)
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
    int a[100],i,j;
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    maopao(a,10);
    for(j=0;j<10;j++)
    {
        printf("%d ",a[j]);
    }
}
