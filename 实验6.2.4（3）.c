/*
����n���ı���ÿ�в�����80���ַ���
���ַ�ָ������ָ����������n���ı���
��n���ı��Ĵ洢�����࣬
ɾ��ÿһ���е�ǰ�ÿո�' '����ˮƽ�Ʊ����'\t'����
Ҫ�󣺽�ɾ��һ���ı���ǰ�ÿո��ˮƽ�Ʊ���Ĺ��ܶ���ɺ�����
��main���������ɾ��ǰ�ÿո���ĸ��С�
*/ 
#include<stdio.h>
#include<ctype.h>
#include<string.h>//�����һ��ͷ�ļ� 
#include<malloc.h>//��Ҫʹ�ó����ÿһ���ı�û������ 
#define max 80
void delete_tab_formerspace (char**,int);

int main(void)
{
	int n, i;
	printf("�������������ı�������\n");//���������֪�������˶������ı�����ô����һ��ѭ��ȥ��֪�ж��ٸ����з��� 
	scanf("%d", &n);
	getchar();//���ջس��� 
	char *str[n],s[max];
	/*��ȡ�ַ���*/
	for(i=0; i<n; i++)
	{
		printf("�������%d��\n",i+1);
		gets(s);
		str[i] = (char *)malloc(strlen(s)+1);
		strcpy(str[i], s);
	}
	delete_tab_formerspace(str,n);
	for(i=0; i<n; i++)
	{
		printf("���Ǵ����ĵ�%d��\n",i+1);
		puts(*(str+i));
		free(*(str+i));
	}
	return 0;
}
void delete_tab_formerspace (char**p,int n)
{
	char a[n][max]={0};//��ʼ��
	int i, j, k;
	for(i=0; i<n; i++)
	{
		j=0;
		while(isspace(p[i][j])) j++;
		for(k=0; p[i][j] != '\0'; j++,k++)
		{
			a[i][k] = p[i][j];
		}
		a[i][j] = '\0';
	}
	for(i=0; i<n; i++)
		strcpy(p[i],a[i]);
}
