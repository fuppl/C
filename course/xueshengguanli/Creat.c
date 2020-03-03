#include "Header.h"
void creat(LNode *H )
{
    int n,i,j;
    S T;
    LNode *p,*r;
    r=H;
    p=H->next;
    printf("«Î ‰»Î»À ˝: ");
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        p=(LNode *)malloc(sizeof(LNode));
        scanf("%ld%s",&p->data.n,p->data.c);
        for(j=0,p->data.zf=0; j<M; j++)
        {
            scanf("%lf",&p->data.a[j]);p->data.zf+=p->data.a[j];
        }
        p->data.pjf=p->data.zf/M;
        r->next=p;
        r=p;
    }
    r->next=NULL;

    for(i=1;i<n;i++)
    {
        p=H->next;
        for(j=0;j<n-i;j++)
        {
            if(p->data.n>p->next->data.n);
            {T=p->data;
            p->data=p->next->data;
            p->next->data=T;}p=p->next;
        }
    }
}
