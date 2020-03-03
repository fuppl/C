#include <stdio.h>
#include <stdlib.h>
#define N 2
int main(void)
{
   void transfor(int a[][N]);
   int array[N][N],i,j;
   for(i=0;i<N;i++)
      for(j=0;j<N;j++)
         scanf("%d",&array[i][j]);
   transfor(array);
   for(i=0;i<N;i++)
      for(j=0;j<N;j++)
         j!=N-1?printf("%d ",array[i][j]):printf("%d\n",array[i][j]);
    return 0;
}
void transfor(int a[][N])
{
//start
int b[N][N],i,j;
for(i=0;i<N;i++)
{
    for(j=0;j<N;j++)
    {
        b[j][i]=a[i][j];
    }
}
for(i=0;i<N;i++)
{
    for(j=0;j<N;j++)
    {
        a[i][j]=b[i][j];
    }
}
//end
}
