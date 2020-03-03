#include "Header.h"

void out(LNode *H)
{
    LNode *p;
    int i;
    p=H->next;
    while(p!=NULL)
    {
        printf("%ld %s ",p->data.n,p->data.c);
        for(i=0;i<M;i++)
        {
            printf("%.2f ",p->data.a[i]);
        }
        printf("%.2f %.2f\n",p->data.zf,p->data.pjf);
        p=p->next;
    }
}
