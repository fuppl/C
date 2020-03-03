#include <stdio.h>
#include <string.h>
int main()
{
    char a[30],b[30];
    char *p;
    int i,j;
    p=a;
    while(gets(a))
    {if(a[0]=='-'||a[0]=='+'||a[0]==' ')
    {
        if(a[1]<='0'||a[1]>='9')
            printf("0\n");
        else
        {
            i=0;
            while(a[i]<='0'||a[i]>='9')
                i++;
            for(i=i,j+0; *(p+i)>='0'&&*(p+i)<='9'; i++)
            {
                b[j]=a[i];
                j++;
            }
            puts(b);
        }
    }
    if(a[i]<='0'||a[i]>='9')
        printf("0\n");}
}
