#include <stdio.h>
typedef struct ppp
{
    char name[30];
    int pj,py;
    char gb,xb;
    int lw;
    long jxj;
} S;
int main()
{
    int n,i,j,s,ma;
    S a[100];
    while(scanf("%d",&n)!=-1)
    {
        for(i=0; i<n; i++)
        {
            scanf("%s%d%d %c %c%d",&a[i].name,&a[i].pj,&a[i].py,&a[i].gb,&a[i].xb,&a[i].lw);
            a[i].jxj=0;
        }
        for(i=0,ma=0,j=0; i<n; i++)
        {
            if(a[i].pj>80&&a[i].lw>=1)
            {
                a[i].jxj+=8000;
            }
            if(a[i].pj>85&&a[i].py>=80)
            {
                a[i].jxj+=4000;
            }
            if(a[i].pj>90)
            {
                a[i].jxj+=2000;
            }
            if(a[i].pj>85&&a[i].xb=='Y')
            {
                a[i].jxj+=1000;
            }
            if(a[i].pj>80&&a[i].gb=='Y')
            {
                a[i].jxj+=850;
            }

            if(a[i].jxj>ma)
            {
                ma=a[i].jxj;
                j=i;
            }
        }
        printf("%s\n%d\n",a[j].name,a[j].jxj);
        for(i=0,s=0; i<n; i++)
        {
            s+=a[i].jxj;
        }
        printf("%d\n",s);
    }
}
