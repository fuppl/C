    #include <stdio.h>
    #include <string.h>
    int main()
    {
        char c[1000],a[50][1000],t[1000];
        int i,j,k,s,m,n;
        while(scanf("%d\n",&n)!=-1)
        {
            for(j=0;j<n;j++)
               {gets(c);
            i=0;
            while(c[i]==' '||c[i]==','||c[i]=='.')
            {
                i++;
            }
            k=0;
            for(m=0; c[i]!='\0'; i++)
            {
                if(c[i]==' '||c[i]==','||c[i]=='.')
                {
                    t[k]='\0';
                    if(strlen(t)!=0){strcpy(a[m],t);
                    m++;}
                    k=0;
                }
                else
                {
                    t[k]=c[i];
                        k++;

                }
            }
            t[k]='\0';
            if(strlen(t)!=0)
            {strcpy(a[m],t);
                    m++;}
            for(i=0; i<m-1; i++)
            {
                printf("%s ",a[i]);
            }
            printf("%s\n",a[m-1]);
            printf("分出了%d个单词\n",m);}
        }
    }
