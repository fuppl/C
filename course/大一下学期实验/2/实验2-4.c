#include <stdio.h>
#include <string.h>
int main()
{
    char a[100][10],b[0][10]={'g','r','e','e','n'},b[1][10]={'r','e','d'},b[2][10]={'b','l','u','e'},b[3][10]={'p','i','n','k'},b[4][10]={'o','r','a','n','g','e'},b[5][10]={'b','l','a','c','k'};
    int n,i,t[6],max;
    while(scanf("%d",&n)!=-1)
    {for(i=0;i<6;i++) t[i]=0;
    for(i=0;i<n;i++)
    {
        gets(a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(strcmp(a[i],b)==0) t[0]++;
        else if(strcmp(a[i],c)==0) t[1]++;
        else if(strcmp(a[i],d)==0) t[2]++;
        else if(strcmp(a[i],e)==0) t[3]++;
        else if(strcmp(a[i],f)==0) t[4]++;
        else if(strcmp(a[i],g)==0) t[5]++;
    }
    for(i=0,max=0;i<n;i++)
    {
        if(t[i]>max) max=t[i];
    }
    printf("%s\n",b[i]);}
}
