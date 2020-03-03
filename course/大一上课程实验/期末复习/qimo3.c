#include <stdio.h>
int main()
{
    char a[1000];
    int i,shuzi,zimu;
    gets(a);
    for(i=0,shuzi=0,zimu=0;a[i]!='\0';i++)
    {
        if(a[i]>='a'&&a[i]<='z'||a[i]>='A'&&a[i]<='Z') zimu++;
        if(a[i]>='1'&&a[i]<='9') shuzi++;
    }
    printf("%d %d",zimu,shuzi);
    return 0;
}
