#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct stu
{
    int n;
    char c[20];
    double x,y,z,cj,pj;
}S;
typedef struct node
{
    S data;
    struct node *next;
}LNode;
void creat(LNode *H,int n)
{
    LNode *p,*r;
    int i;
    r=H;
    for(i=0;i<n;i++)
    {
        p=(LNode *)malloc(sizeof(LNode));
        scanf("%d%s%lf%lf%lf",&p->data.n,&p->data.c,&p->data.x,&p->data.y,&p->data.z);
        p->data.cj=p->data.x+p->data.y+p->data.z;
        p->data.pj=p->data.cj/3;
        r->next=p;
        r=p;
    }
    r->next=NULL;
    p=H->next;
}
void find(LNode *p,int x)
{
    int i=0;
    while(p!=NULL)
    {
        i++;
        if(x==p->data.n)
        {printf("%d  %d  %s  %.2f  %.2f  %.2f  %.2f  %.2f\n",i-1,p->data.n,p->data.c,p->data.x,p->data.y,p->data.z,p->data.pj,p->data.cj);break;}
        else p=p->next;
    }
    if(p->next==NULL)
    printf("0");
}
int main()
{
    int n,x;
    LNode *H;
    while(scanf("%d",&n)!=-1)
    {H=(LNode *)malloc(sizeof(LNode));
    H->next=NULL;
    creat(H,n);
    scanf("%d",&x);
    find(H,x);}
}
