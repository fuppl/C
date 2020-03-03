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

int main()
{
    int n,i,j,w;
    char na[20];
    double x1,y1,z1,cj1;
    LNode *H,*p,*r;

    while(scanf("%d",&n)!=-1)
    {H=(LNode *)malloc(sizeof(LNode));
    H->next=NULL;
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
    while(p!=NULL)
    {
        printf("%d  %s  %.2f  %.2f  %.2f  %.2f  %.2f\n",p->data.n,p->data.c,p->data.x,p->data.y,p->data.z,p->data.pj,p->data.cj);
        p=p->next;
    }}
}
