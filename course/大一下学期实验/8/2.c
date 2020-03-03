#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
   int data;
   struct node *next;
}LNode;
int main()
{
    LNode *H,*p,*r;
    int i,x,n;
    H=(LNode *)malloc(sizeof(LNode));H->next=NULL;
    r=H;
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&x);
        p=(LNode *)malloc(sizeof(LNode));p->data=x;
        r->next=p;
        r=p;r->next=NULL;
    }
    p=H->next;
    while(p!=NULL)
    {
        printf("%d  ",p->data);
        p=p->next;
    }
}
