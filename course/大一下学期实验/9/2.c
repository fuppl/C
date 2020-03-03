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
int fond(LNode *H)
{
    LNode *p;
    int js=0;
    p=H->next;
    while(p!=NULL)
    {
        if(p->data%2==0)
        {
            js++;
        }
        p=p->next;
    }
    return js;
}
int main()
{
    LNode *H;
    int n,t;
    while(scanf("%d",&n)!=-1)
    {H=(LNode *)malloc(sizeof(LNode));
    H->next=NULL;
    creat(n,H);
    t=fond(H);
    printf("%d\n",t);}
}
