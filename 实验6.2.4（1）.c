/*
һ�������ͱ���ռ4���ֽڣ�
����ÿ���ֽ��ֳַɸ�4λ�͵�4λ��
�ԴӸó����ͱ����ĸ��ֽڿ�ʼ��
����ȡ��ÿ���ֽڵĸ�4λ�͵�4λ
����ʮ�����������ַ�����ʽ������ʾ��
Ҫ��ͨ��ָ��ȡ��ÿ�ֽڡ�
*/
#include<stdio.h>//ע��洢�ṹ���� 

int main(void)
{
	int n;
	long x;
	printf("����1�������16��������\n����2�������10��������\n"); 
	do
	{
		printf("��������ѡ���ģʽ\n");
		scanf("%d",&n);
	}while(n<1||n>2);
	switch(n)
	{
		case 1: printf("����16����������\n");scanf("%lx",&x);break;
		case 2: printf("����10����������\n");scanf("%ld",&x);break;
	}
	
	char *p = (char *) &x;
	char up_half,low_half;
	int k;//����ѭ�������Ĳ���
	printf("\t\t����λ\t����λ\n");
	for(k=0,p=p+3;k<4;k++,p--)
	{
		low_half=(*p)&0x0f;	//00001111
		if(low_half<10)
			low_half|=0x30;
		else
			low_half+='A'-10;
		up_half=(*p>>4)&0x0f;
		if(up_half<10)
			up_half|=0x30;
		else
			up_half+='A'-10;
		printf("��%d���ֽ�\t",k+1);
		printf("%c\t%c\t\n",up_half,low_half);
	}
	return 0;
}
