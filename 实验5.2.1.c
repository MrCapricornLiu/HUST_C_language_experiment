/*ʵ��5-1����Ĵ�����ٵ��������*/
#include<stdio.h>
void strcate(char [],char []);
void strdelc(char [],char );
int main(void)
{
	char a[20]="Language",b[20]="Programming";
	
	printf("%s %s\n", b,a);
	strcate(b,a);	
	printf("%s %s\n",b,a);
	strdelc(b, 'a');	
	printf("%s\n",b);
	
	return 0;
}
void strcate(char t[],char s[])
{
	int i = 0,  j = 0;
	while(t[i++]);
	i--;  //�߼�����1��ע�⵽����ֵ��0�Ժ��ֵ�� 
	while((t[i++] = s[j++])!= '\0');//�߼�����2��Խ����� 
}
void strdelc(char s[], char c)
{
	int j,k;
	for(j=k=0; s[j] != '\0'; j++)
		if(s[j] != c)	
			s[k++] = s[j];//����ʱδ������ɾ����
	for(;k<=j;k++)//��ѭ�����������Ѻ����ֵȫ����λ��0/ 
		s[k] = '\0'; 
}
