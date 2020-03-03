#include "Header.h"

void xiugai(LNode *H)
{
    long n;
    int x,b;
    char nam[N];
    double t;
    LNode *p;
    p=H->next;
    printf("请输入要修改信息学生的学号");
    scanf("%ld",&n);
    while(p!=NULL)
    {
        if(p->data.n==n)
        break;
        else p=p->next;
    }
    if(p==NULL)
    printf("查无此人\n");
    else
    {
        printf("请输入想要修改的内容（输入选项前的数字）\n1:姓名\n2:成绩\n");
        scanf("%d",&x);
        if(x==1)
        {
            printf("请输入新姓名");
            gets(nam);
            strcpy(p->data.c,nam);
            printf("修改成功\n");
        }
        else if(x==2)
        {
            printf("请输入该科目在成绩中的顺序：");
            scanf("%d",&b);
            printf("请输入修改后的成绩：");
            scanf("%.2f",&t);
            p->data.a[b-1]=t;
            printf("修改成功\n");
        }
        else printf("输入有误\n");
    }
}
