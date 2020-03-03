#include <stdio.h>
int main()
{
    int a,b,c,d,e,n;
    scanf("%d",&n);
    a=n%10;
    b=n/10%10;
    c=n/100%10;
    d=n/1000%10;
    e=n/10000%10;
    if(e!=0)
    {
      printf("%d %d %d %d %d\n",e,d,c,b,a);
      printf("5");
    }
    else
       if(e==0)
        {
            printf("%d %d %d %d\n",d,c,b,a);
            printf("4");
        }
       else
            if(d==0)
            {
                printf("%d %d %d\n",c,b,a);
                printf("3");
            }
            else
                if(c==0)
                  {
                    printf("%d %d\n",b,a);
                    printf("2");
                  }
                  else
                    if(b==0)
                    {
                       printf("%d\n",a);
                       printf("1");
                    }
    return 0;
}
