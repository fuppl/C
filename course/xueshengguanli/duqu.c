#include "Header.h"

void duqu()
{
    LNode *p,*s,*H;
    FILE *fp;
    if((fp=fopen("d:\\ʵϰ����\\xueshengguanli\\xinxi.txt","rb"))==NULL)
    {
        printf("�ļ�ȱʧ�򲻴���\n");
    }
    H=(LNode *)malloc(sizeof(LNode));
    H->next=NULL;
    p=H;
    while(!feof(fp))
    {
        s=(LNode *)malloc(sizeof(LNode));
        fread(&s->data,sizeof(LNode),1,fp);
        p->next=s;
        p=s;
    }
    p->next=NULL;
    fclose(fp);
    out(H);
}
