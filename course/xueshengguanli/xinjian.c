#include "Header.h"

void xinjian()
{
    LNode *p,*H,*r;
    int x;
    printf("�Ƿ��½���ԭ���ݽ���ʧ\n1:��\n2:��\n");
    scanf("%d",&x);
    if(x==1)
    H=(LNode *)malloc(sizeof(LNode));
    H->next=NULL;
    creat(H);
}
