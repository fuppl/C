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
    int n,i,j,k;
    float a[100],s;
    while(scanf("%d",&n)!=-1)
    {for(i=0;i<n;i++)
    {
        scanf("%f",&a[i]);
    }
    maopao(a,n);

    for(j=1,s=0;j<n-1;j++)
    {
        s+=a[j];
    }
    printf("\n%.2f",s/(n-2));}
    return 0;
}
