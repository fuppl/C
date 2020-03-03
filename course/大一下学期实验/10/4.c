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
int shanchu(LNode *H,int x)
{
    LNode *p,*pre;
    int flag=0;
    p=H->next;
    pre=H;
    while(p!=NULL)
    {
        if(p->data.n==x)
        {
            flag=1;
            pre->next=p->next;
            free(p);
        }
        else
        {
            pre=p;
            p=p->next;
        }
    }
    return flag;
}

int main()
{
    int n,x,w;
    LNode *H,*p,*t;
    while(scanf("%d",&n)!=-1)
    {
        H=(LNode *)malloc(sizeof(LNode));
        H->next=NULL;
        creat(H,n);
        scanf("%d",&x);
        w=shanchu(H,x);

        if(w==1){p=H->next;
        while(p!=NULL)
        {
            printf("%d  %s  %.2f  %.2f  %.2f  %.2f  %.2f\n",p->data.n,p->data.c,p->data.x,p->data.y,p->data.z,p->data.pj,p->data.cj);
            p=p->next;
        }}
        else printf("Error\n");
    }
}
