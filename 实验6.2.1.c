#include<stdio.h>
char *strcopy(char *, const char *);
int main(void)
{
	char *s1, *s2, *s3; 	//������ָ������ָ����Ҫ�����ǿ���һЩ��Ԫ��Ȼ������Щָ��ָ���Ӧ���ڴ浥Ԫ 
	char a[20],b[20],c[20];
	s1=a,s2=b,s3=c;
	printf("Input a string:\n");//���뱣�����s2 
	scanf("%s", s2);
	strcopy(s1, s2);
	printf("%s\n", s1);
	printf("Input a string again:\n");//���뱣�����s2 
	scanf("%s", s2);
	s3 = strcopy(s1, s2);
	printf("%s\n", s3);
	return 0;
}

/*���ַ���s���Ƹ��ַ���t�����ҷ��ش�t���׵�ַ*/
char * strcopy(char *t, const char *s)
{
	char *p = t; 
	while(*t++ = *s++);//ѭ��������ʱ��t��ֵ�Ѿ������׵�ַ�� �������������Ҫ�ȴ洢�����ַ 
	return (p);
}
