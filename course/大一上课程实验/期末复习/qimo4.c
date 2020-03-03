#include <stdio.h>
int main()
{
   int n,i,s;
   while(scanf("%d",&n)!=-1)
   {for(i=1,s=0;i<=n;i++)
   {
       if(n%i==0&&i%2==1) s+=i;
   }
   printf("%d\n",s);}
   return 0;
}
