#include "Header.h"

void xiugai(LNode *H)
{
    long n;
    int x,b;
    char nam[N];
    double t;
    LNode *p;
    p=H->next;
    printf("������Ҫ�޸���Ϣѧ����ѧ��");
    scanf("%ld",&n);
    while(p!=NULL)
    {
        if(p->data.n==n)
        break;
        else p=p->next;
    }
    if(p==NULL)
    printf("���޴���\n");
    else
    {
        printf("��������Ҫ�޸ĵ����ݣ�����ѡ��ǰ�����֣�\n1:����\n2:�ɼ�\n");
        scanf("%d",&x);
        if(x==1)
        {
            printf("������������");
            gets(nam);
            strcpy(p->data.c,nam);
            printf("�޸ĳɹ�\n");
        }
        else if(x==2)
        {
            printf("������ÿ�Ŀ�ڳɼ��е�˳��");
            scanf("%d",&b);
            printf("�������޸ĺ�ĳɼ���");
            scanf("%.2f",&t);
            p->data.a[b-1]=t;
            printf("�޸ĳɹ�\n");
        }
        else printf("��������\n");
    }
}
