#include <stdio.h>
int main()
{
    int n,a,i=0;
    scanf("%d",&n);
    while(n!=0)
{


        a=n%10;
        n=n/10;
        if(a==7)
        {
            i++;
        }
}
if(i>=3)
    printf("good luck!");
    else
    printf("%d",i);
    return 0;
}
