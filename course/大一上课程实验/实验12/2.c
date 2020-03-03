#include <stdio.h>
void zhantie(char a[],char b[])
{
    int i,n=0;
    for(i=0;a[i]!='\0';i++)
    {
        n++;
    }
    for(i=0;b[i]!='\0';i++)
    {
        a[n+i]=b[i];
    }
    a[n+i]='\0';
}
int main()
{
    char a[500],b[100];
    gets(a);
    gets(b);
    zhantie(a,b);
    puts(a);
    return 0;
}
