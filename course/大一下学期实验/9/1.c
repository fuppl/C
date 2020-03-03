#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    int data;
    struct node *next;
}LNode;
void creat(int n,LNode *H)
{
    int x,i;
    LNode *r,*p;
    r=H;
    for(i=0;i<n;i++)
    {
        scanf("%d",&x);
        p=(LNode *)malloc(sizeof(LNode));
        p->data=x;
        r->next=p;
        r=p;
    }
    r->next=NULL;
    //return H->next;
}
int find(LNode *H,int x)
{
    LNode *p,*pre;
    int flag=0;
    p=H->next;
    pre=H;
    while(p!=NULL)
    {
        if(p==H->next&&p->data==x)
        {
            flag=-1;break;
        }
        else if(p->data==x)
        {
            flag=1;
            break;
        }
        else
        {
            p=p->next;
            pre=pre->next;
        }
    }
    if(flag==-1) return -100;
    if(flag==1) return pre->data;
    else return -99;
}
int main()
{
    LNode *H,*p;
    int n,x,t;
    while(scanf("%d",&n)!=-1)
    {H=(LNode *)malloc(sizeof(LNode));
    H->next=NULL;
    creat(n,H);
    scanf("%d",&x);
    t=find(H,x);
    if(t==-100) printf("没有前驱\n");
    else if(t==-99) printf("x不存在\n");
    else printf("%d\n",t);}
}
