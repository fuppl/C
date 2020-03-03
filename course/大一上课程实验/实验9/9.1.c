#include <stdio.h>
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
    int a[10],i,j;
    while(scanf("%d",&a[0])!=-1)
    {

       for(i=1;i<=9;i++)
       {
          scanf("%d",&a[i]);
       }
       maopao(a,10);
       for(j=0;j<=9;j++)
       {
          printf("%d ",a[j]);
       }
    }
    return 0;
}
