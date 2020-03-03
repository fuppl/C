#include "Header.h"

int  baocun(LNode *H)
{
    LNode *p;
    FILE *fp;
    p=H->next;
    fp=fopen("d:\\ÊµÏ°¿ÎÉè\\xueshengguanli\\xinxi.txt","w");
    while(p!=NULL)
    {
        fwrite(&p->data,sizeof(LNode),1,fp);
        p=p->next;
    }
    fclose(fp);
    return 1;
}
