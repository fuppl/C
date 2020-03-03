#include <stdio.h>
int zhi(int n)
{
    int i;
    if(n==2) return 1;
    else
    {
        for(i=2;i<n;i++)
        {
            if(n%i==0) break;
        }
        if(i>=n) return 1;
        else return 0;
    }

}
int main()
{
    int n,jg;
    while(scanf("%d",&n)!=-1)
    {jg=zhi(n);
    if(jg==1) printf("YES");
    else printf("NO");
    }
}
