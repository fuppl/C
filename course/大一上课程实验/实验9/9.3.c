#include <stdio.h>
#include <string.h>
void maopao(int a[],int n)
{
    int x,y,t,flag;
    for(x=1;x<=n-1;x++)
    {

        for(y=0;y<=n-1-x;y++)
        {
            if(a[y]>a[y+1])
            {
                flag=1;
                t=a[y];
                a[y]=a[y+1];
                a[y+1]=t;
            }

        }
    }
}
int main()
{
    int a[100],b[100],c[200],i,j,k,l,x,y,m;
    scanf("%d",&x);
    for(i=0;i<x;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&y);
    for(j=0;j<y;i++)
    {
        scanf("%d",&b[j]);
    }
    for(k=x,m=0;k<x+y;k++,m++)
    {
        a[k]=b[j];
    }
    maopao(a,x+y);
    for(l=0;i<x+y;l++)
    {
        printf("%d ",a[l]);
    }
    return 0;
}
