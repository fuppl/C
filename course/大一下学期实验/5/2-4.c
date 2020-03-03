#include <stdio.h>
#include <string.h>
#define acm struct color
acm
{
    char c[8];
    int n;
};
int main()
{
    acm a[6];
    char b[100][8];
    int p;
    int i,m,ma,j;
    strcpy(a[0].c,"green");
    strcpy(a[1].c,"red");
    strcpy(a[2].c,"blue");
    strcpy(a[3].c,"pink");
    strcpy(a[4].c,"orange");
    strcpy(a[5].c,"black");
    while(scanf("%d",&m)!=-1)
    {
        a[0].n=0;
        a[1].n=0;
        a[2].n=0;
        a[3].n=0;
        a[4].n=0;
        a[5].n=0;
        for(i=0;i<=m;i++)
        {
            gets(b[i]);
        }
        for(i=0; i<m; i++)
        {
            for(j=0; j<6; j++)
            {
                if(strcmp(a[j].c,b[i])==0)
                {
                    a[j].n++;
                }
            }
        }
        for(j=0,ma=0; j<6; j++)
        {
            if(a[j].n>ma)
            {
                ma=a[j].n;
                p=j;
            }
        }
        printf("%s\n",a[p].c);
    }
}
