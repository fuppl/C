#include "Header.h"

void chaxun(LNode *H)
{
    int y,i;
    LNode *p;
    long z;
    char nam[N];
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
