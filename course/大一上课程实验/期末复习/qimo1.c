#include <stdio.h>
#include <string.h>
int main()
{
    char a[1000];
    int n,i;
    scanf("%s",&a);
    scanf("%d",&n);
    for(i=n-1;a[i]!='\0';i++)
    {
        a[i]=a[i+1];
    }
    printf("The new string is:\n%s",a);
    return 0;
}
