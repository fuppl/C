#include <stdio.h>
void hs(char a[],char b[])
{
    char c[1000];
    int x1=0,x2=0,i;
    for(i=0;a[i]!='\0';i++)
        x1++;
    for(i=0;a[i]!='\0';i++)
        x2++;
    if(x1>x2)
    {
       for(i=0;a[i]!='\0';i++)
          {
              c[i]=a[i];
          }
          c[i]='\0';
          for(i=0;b[i]!='\0';i++)
          {
              a[i]=b[i];
          }
          a[i]='\0';
          for(i=0;c[i]!='\0';i++)
            b[i]=c[i];
          b[i]='\0';
    }
}
int main()
{
    char a[1000],b[1000];
    gets(a);
    gets(b);
    hs(a,b);
    puts(a);
    puts(b);
    return 0;
}
