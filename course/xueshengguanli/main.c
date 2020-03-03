#include "Header.h"

int main()
{
    int n;
    LNode *H;
     H=(LNode *)malloc(sizeof(LNode));
    H->next=NULL;
    printf("________________________________\n");
    printf("欢迎使用学生管理系统");
    printf("\n\n您想要做什么：\n请输入选项前数字\n");
    printf(" 0:初始化\n 1:增加学生信息\n 2:修改学生信息\n 3:显示学生信息\n 4:查询学生信息\n 5:删除学生信息\n 6:对学生信息进行排序\n 7:保存学生信息至记录文件\n 8:从记录文件读取学生信息\n 9:新建学生信息文件\n10:运行结束");
    printf("\n\n\n\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    scanf("%d",&n);
    switch(n)
    {
        case 0:creat(H);break;
        case 1:charu(H);break;
        case 2:xiugai(H);break;
        case 3:xianshi(H);break;
        case 4:chaxun(H);break;
        case 5:shanchu(H);break;
        case 6:paixu(H);break;
        //case 7:baocun(H);break;
        //case 8:duqu(H);break;
        //case 9:xinjian(H);break;
        //case 10:break;
    }
    if(n==10)return 0;
}
