#include <stdio.h>
#include <string.h>
typedef struct pjj
{
    char c[20];
    char s[25];
    float a,b,d,pj;
}S;
int main()
{
    S a[100];
    int n,i,j;
    char m[2];
    m[0]='m';
    m[1]='\0';
    float ma;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%s%s%f%f%f",&a[i].c,&a[i].s,&a[i].a,&a[i].b,&a[i].d);
        a[i].pj=(a[i].a+a[i].b+a[i].d)/3;
    }
    for(i=0,ma=0;i<n;i++)
    {
        if(strcmp(m,a[i].s)==0) continue;
        else
        {
            if(a[i].pj>ma)
            {
                ma=a[i].pj;
                j=i;
            }
        }
    }
    printf("I choose %s,and her score is %.2f.\n",a[j].c,a[j].pj);
}
