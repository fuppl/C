#include <stdio.h>
int main()
{
    int n,a[100],x,y,z,i;
    for(i=0,x=0,y=0,z=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]==1) x++;
        if(a[i]==5) y++;
        if(a[i]==10) z++;
    }
    printf("%d %d %d",x,y,z);

}
