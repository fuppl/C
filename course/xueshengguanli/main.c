#include "Header.h"

int main()
{
    int n;
    LNode *H;
     H=(LNode *)malloc(sizeof(LNode));
    H->next=NULL;
    printf("________________________________\n");
    printf("��ӭʹ��ѧ������ϵͳ");
    printf("\n\n����Ҫ��ʲô��\n������ѡ��ǰ����\n");
    printf(" 0:��ʼ��\n 1:����ѧ����Ϣ\n 2:�޸�ѧ����Ϣ\n 3:��ʾѧ����Ϣ\n 4:��ѯѧ����Ϣ\n 5:ɾ��ѧ����Ϣ\n 6:��ѧ����Ϣ��������\n 7:����ѧ����Ϣ����¼�ļ�\n 8:�Ӽ�¼�ļ���ȡѧ����Ϣ\n 9:�½�ѧ����Ϣ�ļ�\n10:���н���");
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
