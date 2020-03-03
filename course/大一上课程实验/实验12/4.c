#include <stdio.h>
int danci(char a[])
{
    int i,n=0,word=0;
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]==' ')
        {
            word=0;
        }
        else if(word==0)
        {
            word=1;
            n++;
        }
    }
    return n;
}
int main()
{
    char a[100];
    int n;
    while(gets(a)!=NULL)
    {
        n=danci(a);
        printf("%d\n",n);
    }
    return 0;
}
