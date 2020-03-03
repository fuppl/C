#include "Header.h"

void xianshi(LNode *H)
{
    int x,i,y,w,num,r,flag;
    S t;
    long z;
    char nam[N];
    LNode *p,*q,*p1;
    p=H->next;
    printf("请输入选项前数字：\n1:显示单个学生信息\n2:显示所有学生信息\n3.显示特定学生信息\n");
    scanf("%d",&x);
    if(x==1)
    {
        printf("请输入查找方式：\n1:按学号查找\n2:按姓名查找\n");
        scanf("%d",&y);
        if(y==1)
        {
            printf("请输入学号：");
            scanf("%ld",&z);
            while(p!=NULL)
            {
                if(p->data.n==z)
                    break;
                else p=p->next;
            }
            if(p==NULL)printf("查无此人\n");
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
            printf("请输入姓名：");
            scanf("%s",&nam);
            while(p!=NULL)
            {
                if(strcmp(p->data.c,nam)==0)
                    break;
                else p=p->next;
            }
            if(p==NULL)
                printf("查无此人\n");
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
        printf("1:按学号输出\n2:按成绩输出");
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
            printf("1:按总成绩显示\n2:按单科成绩显示");
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
                p=H->next;
                out(H);


            }

        }
    }
    if(x==3)
    {
        printf("1:显示单科满分的学生\n2:显示单科优秀的学生\n3:显示单科及格的学生\n4:显示单科不及格的学生\n5:显示全优秀的学生\n6:显示挂科的学生\n");
        scanf("%d",&y);
        if(y==1)
        {
            printf("请输入该科目在成绩数组中的位置");
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
            printf("请输入该科目在成绩数组中的位置");
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
            printf("请输入该科目在成绩数组中的位置");
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
            printf("请输入该科目在成绩数组中的位置");
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
