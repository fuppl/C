#include "Header.h"

void chaxun(LNode *H)
{
    int y,i;
    LNode *p;
    long z;
    char nam[N];
    printf("��������ҷ�ʽ��\n1:��ѧ�Ų���\n2:����������\n");
    scanf("%d",&y);
    if(y==1)
    {
        printf("������ѧ�ţ�");
        scanf("%ld",&z);
        while(p!=NULL)
        {
            if(p->data.n==z)
                break;
            else p=p->next;
        }
        if(p==NULL)printf("���޴���\n");
        else
        {
            printf("%ld\n%s\n",p->data.n,p->data.c);
            for(i=0; i<M; i++)
            {
                printf("%.2f ",p->data.a[i]);
            }
            printf("%.2f %.2f\n",p->data.zf,p->data.pjf);
        }
    }
    if(y==2)
    {
        printf("������������");
        scanf("%s",&nam);
        while(p!=NULL)
        {
            if(strcmp(p->data.c,nam)==0)
                break;
            else p=p->next;
        }
        if(p==NULL)
            printf("���޴���\n");
        else
        {
            printf("%ld\n%s\n",p->data.n,p->data.c);
            for(i=0; i<M; i++)
            {
                printf("%.2f ",p->data.a[i]);
            }
            printf("%.2f %.2f\n",p->data.zf,p->data.pjf);
        }
    }
    p=H->next;
}
