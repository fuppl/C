#include <stdio.h>
int zhi(int n)
{
    int i;
    for(i=1;i<n;i++)
    {
        if(i!=1&&n%i==0) break;
    }
    if(i>=n) return 1;
    else return 0;
}
int main()
{
   int n,a[100],i,j,s;
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
       scanf("%d",&a[i]);

   }
   for(j=0,s=0;j<n;j++)
   {
       if(zhi(a[j])==1) s+=a[j];
   }
   printf("%d",s);
}
