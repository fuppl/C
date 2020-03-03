#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int n,a[100],i,j,ma;
    char (*p)[100];
    while(scanf("%d ",&n)!=-1)
    {

        p=(char(*)[100])calloc(n,sizeof(char[100]));
        for(i=0; i<n; i++)
        {
            gets(p[i]);
            a[i]=strlen(p[i]);
        }
        for(i=0,ma=0,j=0; i<n; i++)
        {
            if(a[i]>ma)
            {
                ma=a[i];
                j=i;
            }
        }
        puts(p[j]);
    }
}
