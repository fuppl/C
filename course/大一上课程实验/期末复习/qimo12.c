#include <stdio.h>
int main()
{
   int n,i;
   float a[100],s,mx;
   while(scanf("%d",&n)!=-1)
   {
       mx=0;
       for(i=0,s=0;i<n;i++)
       {
           scanf("%f",&a[i]);
           if(a[i]>mx)
           {
               mx=a[i];
           }
       }
       printf("%.1f\n",mx);
   }
}
