#include "Header.h"

void paixu(LNode *H)
{
    LNode *p,*q,*p1;
    S t;
    int x,y,r,z;
    p=H->next;
    printf("1:按学号排序\n2:按成绩排序\n");
    scanf("%d",&x);
    if(x==1)
    {
        while(p->next!=NULL)
        {
            p1=p;
            q=p->next;
            while(q!=NULL)
            {
                if(q->data.n<p1->data.n)
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
        printf("排序成功\n是否输出\n1:是\n2:否\n");
        scanf("%d",&y);
        if(y==1)
            out(H);
    }
    if(x==2)
    {
        printf("1:按单科成绩排序\n2:按总成绩排序\n");
        scanf("%d",&y);
        if(y==1)
        {
            printf("请输入该科目在成绩数组中位置:");
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
            //p=H->next;
            printf("排序成功\n是否输出\n1:是\n2:否\n");
            scanf("%d",&z);
            if(z==1)
                out(H);
        }
        if(y==2)
        {
            p=H->next;
            while(p->next!=NULL)
            {
                p1=p;
                q=p->next;
                while(q!=NULL)
                {
                    if(q->data.pjf>p1->data.pjf)
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
            printf("排序成功\n是否输出\n1:是\n2:否\n");
            scanf("%d",&z);
            if(z==1)
            out(H);
        }
    }
}
