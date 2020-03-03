#include <stdio.h>
int main()
{
    int a[15],i,j;
    for(i=1;i<=15;i++)
    {
        scanf("%d",&a[i-1]);
        //printf("%d ",a[i-1]);
    }
    for(j=1;j<=15;j++)
    {
        printf("%d ",a[j-1]);
        if(j%5==0) printf("\n");
    }
    return 0;

}
