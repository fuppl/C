#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    int data;
    struct node *next;
}LNode;
int main()
{
    LNode *a,*b,*c,*H,*d;
    int a1,b1,c1,d1;
    scanf("%d%d%d",&a1,&b1,&c1);
    H=(LNode *)malloc(sizeof(LNode));
    H->next=NULL;
    a=(LNode *)malloc(sizeof(LNode));a->data=a1;

    b=(LNode *)malloc(sizeof(LNode));b->data=b1;
    c=(LNode *)malloc(sizeof(LNode));c->data=c1;
    scanf("%d",&d1);
    d=(LNode *)malloc(sizeof(LNode));d->data=d1;
    b->next=d;d->next=c;
    printf("Head:->%d->%d->%d->%d",a->data,b->data,d->data,c->data);
}
