#include "Header.h"

void charu(LNode *H)
{
    LNode *t;
    int i,x;
    printf("请输入学生信息：\n");
    printf("请输入学号：");scanf("%ld",&t->data.n);
    printf("请输入学生姓名：");scanf("%s",&t->data.c);
    //printf("请输入科目数：");scanf("%d",&x);
    printf("请输入各门成绩：");
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



