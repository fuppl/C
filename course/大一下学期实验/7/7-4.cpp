#include <stdio.h>
#include <stdlib.h>
#include <math.h>
typedef struct ppp
{
    double x,y;
}S;
int main()
{
   S *p,*q;
   int n,i,j;
   double d,mi;
   scanf("%d",&n);
   p=q=(S *)calloc(n,sizeof(S));
   for(i=0;i<n;i++)
   {
       scanf("%lf%lf",&p->x,&p->y);p++;
   }
   p=q;
   for(i=0,mi=99999;i<n;i++)
   {
       for(j=i+1;j<n;j++)
       {
           if(pow(p[j].x-p[i].x,2)+pow(p[j].y-p[i].y,2)<mi)
           mi=pow(p[j].x-p[i].x,2)+pow(p[j].y-p[i].y,2);
       }
   }
   printf("%.1lf\n",sqrt(mi));
}
