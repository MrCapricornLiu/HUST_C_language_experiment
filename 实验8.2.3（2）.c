/*
�Ӽ�������10�������ȸ�������
�Զ�������ʽ�����ļ�float.dat�С�
�ٴ��ļ��ж�����10�������ȸ�������ʾ����Ļ�ϡ�
֮��Ҫ��float.dat�еĵ����ȸ��������ֽڶ�������
�۲�д���ļ��ĸ������ֽ������ǲ��Ǻͼ�����ڴ��б�ʾ�ĸ������ֽ�����һ�¡�
*/
#include<stdio.h>
#include<stdlib.h>
#define M (sizeof(float))
#define N 1 
int main(void)
{
	int i; 
	float input[N] = {0}, output;
	unsigned char c;
	for(i=0; i<N; i++)
		scanf("%f",&input[i]);
	/*д���ļ�*/
	FILE *fp;
	fp = fopen("float.dat","wb+");
	fwrite(input,M,N,fp);
	rewind(fp);
	while(fread(&output,sizeof(float),1,fp))
		printf("%f\n",output);
	rewind(fp);
	while(fread(&c,sizeof(unsigned char),1,fp))
		printf("%02X",c);
	return 0;
}
