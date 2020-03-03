#include <stdio.h>
#include <string.h>
typedef struct ppp
{
    int n;
    int type;
    double cj;
    char name[30];

}S;
int main()
{
   S a[100];
   int n,i,bjg;
   scanf("%d",&n);
   for(i=0,bjg=0;i<n;i++)
   {
       scanf("%lld%s%d%lf",&a[i].n,&a[i].name,&a[i].type,&a[i].cj);
       if(a[i].type==1&&a[i].cj<60) bjg++;
       else if(a[i].type==2&&a[i].cj<50) bjg++;
       else if(a[i].type==3&&a[i].cj<65) bjg++;
   }
   printf("%d\n",bjg);
   for(i=0;i<n;i++)
   {
       printf("%d %s %d %.2f\n",a[i].n,a[i].name,a[i].type,a[i].cj);
   }
}
