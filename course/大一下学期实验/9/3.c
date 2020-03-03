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
void dele(LNode *H,int x)
{
    LNode *p,*pre,*q;
    p=H->next;
    pre=H;
    while(p!=NULL)
    {
        if(p->data==x)
        {
            q=p;
            pre->next=p->next;
            p=pre->next;
            free(q);
        }
        else
        {pre=p;p=p->next;
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
    LNode *H,*p;
    int n,x;
    while(scanf("%d",&n)!=-1)
    {H=(LNode *)malloc(sizeof(LNode));
    H->next=NULL;
    creat(n,H);
    //out(H);
    scanf("%d",&x);
    dele(H,x);
    out(H);}
}
