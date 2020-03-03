#include "Header.h"

void xinjian()
{
    LNode *p,*H,*r;
    int x;
    printf("是否新建，原数据将丢失\n1:是\n2:否\n");
    scanf("%d",&x);
    if(x==1)
    H=(LNode *)malloc(sizeof(LNode));
    H->next=NULL;
    creat(H);
}
