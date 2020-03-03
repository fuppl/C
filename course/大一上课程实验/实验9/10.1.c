#include <stdio.h>
#include <string.h>
int main()
{
    int m,n;
    char a[100],b[100],c[100];
    gets(a);gets(b);
    m=strlen(a);
    n=strlen(b);
    if(m<=n)
    {
        puts(a);
        printf(" ");
        puts(b);
    }
    if(m>n)
    {
        strcpy(c,a);
        strcpy(a,b);
        strcpy(b,c);
        puts(a);
        printf(" ");
        puts(b);
    }
    return 0;
}
