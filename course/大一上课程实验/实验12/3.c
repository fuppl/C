#include <stdio.h>
int bj(char a[],char b[])
{
    int i,n;
    for(i=0;a[i]!='\0'||b[i]!='\0';i++)
    {
        if(a[i]!=b[i]) break;
    }
    n=a[i]-b[i];
    return n;
}
int main()
{
    int x;
    char a[500],b[500];
    while(gets(a)!=NULL)
    {
        gets(b);
        x=bj(a,b);
        printf("%d\n",x);
    }
    return 0;
}
