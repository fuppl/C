#include "Header.h"

void shanchu(LNode *H)
{
    LNode *p,*pre;
    int x,y,z;
    long num;
    char nam[N];
    printf("1:��ѧ��ɾ��\n2:������ɾ��\n");
    scanf("%d",&x);
    if(x==1)
    {
        printf("������Ҫɾ����ѧ��:");
        scanf("%ld",&num);
        p=H->next;
        pre=H;
        while(p!=NULL)
        {
            if(p->data.n==num)
                break;
            pre=p;
            p=p->next;

        }
        if(p!=NULL)
        {
            pre->next=p->next;
            free(p);
            printf("ɾ���ɹ�\n");
        }
        else printf("���޴���\n");

    }
    if(x==2)
    {
        printf("������Ҫɾ��������:");
        scanf("%s",&nam);

            p=H->next;
            pre=H;
            while(p!=NULL)
            {
                if(strcmp(p->data.c,nam)==0)
                    break;
                pre=p;
                p=p->next;

            }
            if(p!=NULL)
            {
                pre->next=p->next;
                free(p);
                printf("ɾ���ɹ�\n");
            }
            else printf("���޴���\n");


    }
}
