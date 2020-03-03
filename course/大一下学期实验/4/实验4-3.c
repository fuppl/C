#include <stdio.h>
#include <string.h>
char zhao(char c[][],int n)
{
    int s,i,j,js;
    for(j=0;j<n;j++)
    for(i=0;c[j][i]!='\0';i++)
    {
        if(c[j][i]=='*')
        {
            js++;
        }
    }
}
