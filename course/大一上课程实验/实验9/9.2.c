#include <stdio.h>
void maopao(int a[],int n)
{
    int i,j,t;
    for(i=1;i<n;i++)
    {
        for(j=0;j<n-i;j++)
        {
            if(a[j]>a[j+1])
            {
                t=a[j];a[j]=a[j+1];a[j+1]=t;
            }
        }
    }
}
int erfen(int a[],int n,int x)
{
    int high,low,mid,flag=0;
    high=n-1;low=0;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(x==a[mid]) {flag=1;break;}
        if(x>mid) {low=mid+1;}
        if(x<mid) {high=mid-1;}
    }
    if(flag==1) return mid;
    else return -1;
}
int main()
{
    int a[100],n,i,jg;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    maopao(a,n);
    int x;
    scanf("%d",&x);
    jg=erfen(a,n,x);
    printf("%d",jg);
    return 0;
}
