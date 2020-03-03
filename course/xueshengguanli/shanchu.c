#include "Header.h"

void shanchu(LNode *H)
{
    LNode *p,*pre;
    int x,y,z;
    long num;
    char nam[N];
    printf("1:按学号删除\n2:按姓名删除\n");
    scanf("%d",&x);
    if(x==1)
    {
        printf("请输入要删除的学号:");
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
            printf("删除成功\n");
        }
        else printf("查无此人\n");

    }
    if(x==2)
    {
        printf("请输入要删除的姓名:");
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
                printf("删除成功\n");
            }
            else printf("查无此人\n");


    }
}
