/*��д����strnins(s,t,n),
�书���ǣ��ɽ��ַ����� t�е��ַ������뵽�ַ����� s���ַ����ĵ�n���ַ��ĺ��档*/
#include<stdio.h>
void strnins(char s[],char t[],int n);
int main(void)
{
	char t[40],s[40];
	int n;
	printf("�����������ַ�Ȼ����������Ҫ�����λ��\n"); 
	scanf("%s%s",s,t);
	scanf("%d",&n);
	strnins(s,t,n);
	
	printf("%s",s);
	return 0;
}
void strnins(char s[],char t[],int n)
{
	int i,j,w=0,e=0;
	char a[40];
	while(1)
	{
		if(s[w]<0)
			w+=2,e++;
		else
			w++,e++;
		if(e==n)
			break;
	}
	for(i=w,j=0;s[i]!='\0';i++,j++)
	{
		a[j]=s[i];
	}
	for(i=w,j=0;t[j]!='\0';i++,j++)//i=nʱʵ�����ǵ�n+1��
	{
		s[i]=t[j];
	}
	for(j=0;a[j]!='\0';i++,j++)
	{
		s[i]=a[j];
	}
	s[i]='\0';
}
