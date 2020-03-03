#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    int data;
    struct node *next;
}LNode;
int main()
{
    LNode *H,*p;
    int n,i,x;
    H=(LNode *)malloc(sizeof(LNode));H->next=NULL;
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&x);
        p=(LNode *)malloc(sizeof(LNode));
        p->data=x;
        p->next=H->next;
        H->next=p;
    }
    p=H->next;
    while(p!=NULL)
    {
        printf("%d  ",p->data);
        p=p->next;
    }
}
