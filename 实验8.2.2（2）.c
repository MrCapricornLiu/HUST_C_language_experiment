#include<stdio.h>
#include<stdlib.h>
int main(int argc, char* argv[])
{
	int ch;
	if(argc!=3)
	{
		printf("Arguments error!\n");exit(-1);
	}
	if(freopen(argv[1],"r",stdin)==NULL)
	{
		printf("Can't open %s",argv[1]); exit(-1);
	}
	freopen(argv[2], "w", stdout);
	while((ch = getchar())!=EOF)          /* ��filename�ж��ַ� */
	   putchar(ch);                  /* ����ʾ����д�ַ� */
	fclose(stdin);
	fclose(stdout);
	return 0;	
}
