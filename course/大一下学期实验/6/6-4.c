    #include <stdio.h>
    typedef struct ppp
    {
        char name[30];
        long n;
        double cj;
    }S;
    int main()
    {
        int n,i,js;
        S a[100];
        int b[100];
        while(scanf("%d",&n)!=-1)
        {for(i=0,js=0;i<n;i++)
        {
            gets(a[i].name);
            scanf("%ld\n%lf\n",&a[i].n,&a[i].cj);
            if(a[i].cj<60)
            {
                js++;
            }
        }
        if(js==0) printf("They are Great!!\n");
        else for(i=0;i<n;i++)
        {
            if(a[i].cj<60)
            {
                puts(a[i].name);
                printf("%ld\n%.2f\n",a[i].n,a[i].cj);
            }
        }}
    }
