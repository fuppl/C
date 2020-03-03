#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct stu
{
    int n;
    char c[20];
    double x,y,z,cj,pj;
} S;
typedef struct node
{
    S data;
    struct node *next;
} LNode;
void creat(LNode *H,int n)
{
    LNode *p,*r;
    int i;
    r=H;
    for(i=0; i<n; i++)
    {
        p=(LNode *)malloc(sizeof(LNode));
        scanf("%d%s%lf%lf%lf",&p->data.n,&p->data.c,&p->data.x,&p->data.y,&p->data.z);
        p->data.cj=p->data.x+p->data.y+p->data.z;
        p->data.pj=p->data.cj/3;
        r->next=p;
        r=p;
    }
    r->next=NULL;
}
void charu(LNode *H,LNode *t)
{
    LNode *p,*pre;
    p=H->next;
    pre=H;
    while(p!=NULL)
    {
        if(p->data.n>t->data.n)
        {
            t->next=p;
            pre->next=t;
            break;
        }
        else {pre=p;p=p->next;}
    }

}
void out(LNode *H)
{
    LNode *p;
    p=H->next;
    while(p!=NULL)
    {
        printf("%d  %s  %.2f  %.2f  %.2f  %.2f  %.2f\n",p->data.n,p->data.c,p->data.x,p->data.y,p->data.z,p->data.pj,p->data.cj);
    }
}
int main()
{
    int n,x;
    LNode *H,*p,*t;
    while(scanf("%d",&n)!=-1)
    {H=(LNode *)malloc(sizeof(LNode));
    H->next=NULL;
    creat(H,n);
    p=(LNode *)malloc(sizeof(LNode));
    scanf("%d%s%lf%lf%lf",&p->data.n,&p->data.c,&p->data.x,&p->data.y,&p->data.z);
    p->data.cj=p->data.x+p->data.y+p->data.z;
    p->data.pj=p->data.cj/3;
    charu(H,p);
    p=H->next;
    while(p!=NULL)
    {
        printf("%d  %s  %.2f  %.2f  %.2f  %.2f  %.2f\n",p->data.n,p->data.c,p->data.x,p->data.y,p->data.z,p->data.pj,p->data.cj);
        p=p->next;
    }}
}
