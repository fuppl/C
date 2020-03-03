#include <stdio.h>
#define fen struct cj
fen
{
    float a,b,c,pj,z;
};
int main()
{
    fen a[20];
    int n,i,j;
    float s;
    while(scanf("%d",&n)!=-1)
    {
        for(i=0; i<n; i++)
        {
            scanf("%f%f%f",&a[i].a,&a[i].b,&a[i].c);
            a[i].z=a[i].a+a[i].b+a[i].c;
            a[i].pj=a[i].z/3;
        }
        for(i=0; i<n; i++)
        {
            printf("%.2f %.2f\n",a[i].z,a[i].pj);
        }
        for(i=0,s=0; i<n; i++)
        {
            s+=a[i].a;
        }
        printf("%.2f %.2f\n",s,s/n);
        for(i=0,s=0; i<n; i++)
        {
            s+=a[i].b;
        }
        printf("%.2f %.2f\n",s,s/n);
        for(i=0,s=0; i<n; i++)
        {
            s+=a[i].c;
        }
        printf("%.2f %.2f\n",s,s/n);
    }
}
