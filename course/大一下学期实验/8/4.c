#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    int data;
    struct node *next;
} LNode;
int main()
{
    LNode *H,*r,*p;
    int i,n,x,js=0;
    H=(LNode *)malloc(sizeof(LNode));
    H->next=NULL;
    r=H;
    scanf("%d",&x);
    while(x!=0)
    {
        p=(LNode *)malloc(sizeof(LNode));
        p->data=x;
        r->next=p;
        r=p;

        scanf("%d",&x);
    }r->next=NULL;
    p=H->next;
    while(p!=NULL)
    {
        printf("%d  ",p->data);
        p=p->next;
        js++;
    }
    printf("\n%d",js);
}
