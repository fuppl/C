#include "Header.h"

void xianshi(LNode *H)
{
    int x,i,y,w,num,r,flag;
    S t;
    long z;
    char nam[N];
    LNode *p,*q,*p1;
    p=H->next;
    printf("������ѡ��ǰ���֣�\n1:��ʾ����ѧ����Ϣ\n2:��ʾ����ѧ����Ϣ\n3.��ʾ�ض�ѧ����Ϣ\n");
    scanf("%d",&x);
    if(x==1)
    {
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
    if(x==2)
    {
        printf("1:��ѧ�����\n2:���ɼ����");
        scanf("%d",&y);
        if(y==1)
        {
            while(p!=NULL)
            {
                printf("%ld\n%s\n",p->data.n,p->data.c);
                for(i=0; i<M; i++)
                {
                    printf("%.2f ",p->data.a[i]);
                }
                printf("%.2f %.2f\n",p->data.zf,p->data.pjf);
                //p=p->next;
            }
        }
        if(y==2)
        {
            printf("1:���ܳɼ���ʾ\n2:�����Ƴɼ���ʾ");
            scanf("%d",&w);
            if(w==1)
            {
                p=H->next;
                while(p->next!=NULL)
                {
                    p1=p;
                    q=p->next;
                    while(q!=NULL)
                    {
                        if(q->data.zf>p1->data.zf)
                            p1=q;
                        q=q->next;
                    }
                    if(p1!=p)
                    {
                        t=p->data;
                        p->data=p1->data;
                        p1->data=t;
                    }
                    p=p->next;
                }
                p=H->next;
                out(H);
            }
            if(w==2)
            {
                printf("������ÿ�Ŀ�ڳɼ�������λ��:");
                scanf("%d",&r);
                p=H->next;
                while(p->next!=NULL)
                {
                    p1=p;
                    q=p->next;
                    while(q!=NULL)
                    {
                        if(q->data.a[r-1]>p1->data.a[r-1])
                            p1=q;
                        q=q->next;
                    }
                    if(p1!=p)
                    {
                        t=p->data;
                        p->data=p1->data;
                        p1->data=t;
                    }
                    p=p->next;
                }
                p=H->next;
                out(H);


            }

        }
    }
    if(x==3)
    {
        printf("1:��ʾ�������ֵ�ѧ��\n2:��ʾ���������ѧ��\n3:��ʾ���Ƽ����ѧ��\n4:��ʾ���Ʋ������ѧ��\n5:��ʾȫ�����ѧ��\n6:��ʾ�ҿƵ�ѧ��\n");
        scanf("%d",&y);
        if(y==1)
        {
            printf("������ÿ�Ŀ�ڳɼ������е�λ��");
            scanf("%d",&r);
            p=H->next;
            while(p!=NULL)
            {
                if(p->data.a[r-1]==100)
                {
                    printf("%ld %s ",p->data.n,p->data.c);
                    for(i=0; i<M; i++)
                        printf("%.2f ",p->data.a[i]);
                    printf("%.2f %.2f\n",p->data.zf,p->data.pjf);
                }
                else p=p->next;
            }
        }
        if(y==2)
        {
            printf("������ÿ�Ŀ�ڳɼ������е�λ��");
            scanf("%d",&r);
            p=H->next;
            while(p!=NULL)
            {
                if(p->data.a[r-1]>=80)
                {
                    printf("%ld %s ",p->data.n,p->data.c);
                    for(i=0; i<M; i++)
                        printf("%.2f ",p->data.a[i]);
                    printf("%.2f %.2f\n",p->data.zf,p->data.pjf);
                }
                else p=p->next;
            }
        }
        if(y==3)
        {
            printf("������ÿ�Ŀ�ڳɼ������е�λ��");
            scanf("%d",&r);
            p=H->next;
            while(p!=NULL)
            {
                if(p->data.a[r-1]>=60)
                {
                    printf("%ld %s ",p->data.n,p->data.c);
                    for(i=0; i<M; i++)
                        printf("%.2f ",p->data.a[i]);
                    printf("%.2f %.2f\n",p->data.zf,p->data.pjf);
                }
                else p=p->next;
            }
        }
        if(y==4)
        {
            printf("������ÿ�Ŀ�ڳɼ������е�λ��");
            scanf("%d",&r);
            p=H->next;
            while(p!=NULL)
            {
                if(p->data.a[r-1]<60)
                {
                    printf("%ld %s ",p->data.n,p->data.c);
                    for(i=0; i<M; i++)
                        printf("%.2f ",p->data.a[i]);
                    printf("%.2f %.2f\n",p->data.zf,p->data.pjf);
                }
                else p=p->next;
            }
        }
        if(y==5)
        {
            p=H->next;
            while(p!=NULL)
            {
                flag=0;
                for(i=0; i<M; i++)
                {
                    if(p->data.a[i]<80)
                        flag=1;
                }
                if(flag==0)
                {
                    printf("%ld %s ",p->data.n,p->data.c);
                    for(i=0; i<M; i++)
                        printf("%.2f ",p->data.a[i]);
                    printf("%.2f %.2f\n",p->data.zf,p->data.pjf);
                }
                p=p->next;

            }
        }
        if(y==6)
        {
            p=H->next;
            while(p!=NULL)
            {
                flag=0;
                for(i=0; i<M; i++)
                {
                    if(p->data.a[i]<60)
                        flag=1;
                }
                if(flag==1)
                {
                    printf("%ld %s ",p->data.n,p->data.c);
                    for(i=0; i<M; i++)
                        printf("%.2f ",p->data.a[i]);
                    printf("%.2f %.2f\n",p->data.zf,p->data.pjf);
                }
                p=p->next;
            }
        }
    }
}
