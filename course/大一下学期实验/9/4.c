#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    int data;
    struct node *next;
} LNode;
void creat(int n,LNode *H)
{
    int x,i;
    LNode *r,*p;
    r=H;
    for(i=0; i<n; i++)
    {
        scanf("%d",&x);
        p=(LNode *)malloc(sizeof(LNode));
        p->data=x;
        r->next=p;
        r=p;
    }
    r->next=NULL;
}
void charu(LNode *H,int x)
{
    LNode *p,*q,*pre;
    p=H->next;pre=H;
    while(p!=NULL)
    {
        if(p->data<x&&p->next==NULL)
        {
            q=(LNode *)malloc(sizeof(LNode));q->next=NULL;
            q->data=x;
            p->next=q;
        }
        else if(p->data>x)
        {
            q=(LNode *)malloc(sizeof(LNode));
            q->data=x;
            q->next=p;
            pre->next=q;
            break;
        }
        else
        {
            pre=p;
            p=p->next;
        }
    }
}
void out(LNode* H)
{
    LNode *p;
    p=H->next;
    while(p!=NULL)
    {
        printf("%d  ",p->data);
        p=p->next;
    }
    printf("\n");
}
int main()
{
    LNode *H;
    int n,x;
    while(scanf("%d",&n)!=-1)
    {H=(LNode *)malloc(sizeof(LNode));
    H->next=NULL;
    creat(n,H);
    scanf("%d",&x);
    charu(H,x);
    out(H);}
}
