#include <stdio.h>
void cr(char s1[],char s2[],int f)
{
    char s3[500];
    int i,t;
    for(i=0;s1[i]!='\0';i++)
        s3[i]=s1[i+f];
    s3[i]='\0';
    for(i=0;s2[i]!='\0';i++)
    {
        s1[f+i]=s2[i];
    }
    t=f+i;
    for(i=0;s3[i]!='\0';i++)
       s1[t+i]=s3[i];
       s1[t+i]='\0';
}
int main()
{
    char s1[500],s2[500];
    int f;
    gets(s1);
    gets(s2);
    scanf("%d",&f);
    cr(s1,s2,f);
    puts(s1);
    return 0;
}
