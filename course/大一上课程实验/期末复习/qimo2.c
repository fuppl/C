#include <stdio.h>
int main()
{
    char a[100];
    scanf("%s",a);
    int i;
    for(i=0;a[i]!='\0';i++)
    {
        if((a[i]<'0'||a[i]>'9')&&(a[i]<'a'||a[i]>'z')&&(a[i]<'A'||a[i]>'Z'))
            printf("%c",a[i]);
    }
    return 0;
}
