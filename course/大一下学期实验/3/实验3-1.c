#include <stdio.h>
int main()
{
    long a[3];
    long *p,t;
    int i,j;
    while(scanf("%ld",&a[0])!=-1)
    {
        p=a;
        for(i=1; i<3; i++)
        {
            scanf("%ld",&a[i]);
        }
        for(i=1; i<3; i++)
        {
            for(j=0; j<3-i; j++)
            {
                if(a[j]>a[j+1])
                {
                    t=*(p+j);
                    *(p+j)=*(p+j+1);
                    *(p+j+1)=t;
                }
            }
        }
        for(i=0; i<2; i++)
        {
            printf("%ld ",*(p+i));
        }
        printf("%ld\n",a[2]);
    }
    return 0;
}
