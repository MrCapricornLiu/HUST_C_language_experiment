#include "stdio.h"
char *strcpy(char *,char *);
int main(void)//�ҵ�main����ֻ�ܷ���ֵΪint 
{
    char a[50],b[60]="there is a boat on the lake.";
    printf("%s\n",strcpy(a,b));
}
char *strcpy(char *s,char *t)
{
	char *p = s;
    while(*s++=*t++)//��������һ�������Ժ�s��ֵ�����˱仯 
    ;
    return (p);
}
