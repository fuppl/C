#include "Header.h"

void charu(LNode *H)
{
    LNode *t;
    int i,x;
    printf("������ѧ����Ϣ��\n");
    printf("������ѧ�ţ�");scanf("%ld",&t->data.n);
    printf("������ѧ��������");scanf("%s",&t->data.c);
    //printf("�������Ŀ����");scanf("%d",&x);
    printf("��������ųɼ���");
    for(i=0,t->data.zf=0;i<M;i++)
    {
        scanf("%lf",&t->data.a[i]);
        t->data.zf+=t->data.a[i];
    }
    t->data.pjf=t->data.zf/M;

    LNode *p,*pre;
    p=H->next;
    pre=H;
    while(p!=NULL)
    {
        if(p->data.n>t->data.n)
        {
            t->next=p;
            pre->next=t;
            break;
        }
        else {pre=p;p=p->next;}
    }
}



