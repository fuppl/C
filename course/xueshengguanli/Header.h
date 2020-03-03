#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#define M 10
#define N 30
typedef struct student
{
    long n;
    char c[N];
    double a[M],zf,pjf;
}S;
typedef struct node
{
    S data;
    struct node *next;
}LNode;
void creat(LNode *H);
void charu(LNode *H);
void xiugai(LNode *H);
void xianshi(LNode *H);
void chaxun(LNode *H);
void shanchu(LNode *H);
void paixu(LNode *H);
void baocun(LNode *H);
void duqu(LNode *H);
void xinjian(LNode *H);

#endif // HEADER_H_INCLUDED
