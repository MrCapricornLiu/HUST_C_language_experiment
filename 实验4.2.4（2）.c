/*���������뷽������д��������һ��Ӣ���ַ����У�������ѡ���ַ�ʽ֮һ�����
һΪԭ���������Ϊ�任��ĸ�Ĵ�Сд�����������Сд��a����ɴ�д��A������д��D�����Сд��d���������ַ����䡣
��#define��������Ƿ�任��ĸ�Ĵ�Сд��
���磬#define CHANGE 1 ������任������֣���#define CHANGE 0��ԭ�������*/
#include<stdio.h>
#define CHANGE 0 
int main(void)
{
	char c;
	
	if(CHANGE)
		printf("����һ��Ӣ�����У����ǽ�����任�������\n");
	else
	{
		printf("����һ��Ӣ�����У����ǽ�����ԭ�����\n");
	} 
	#if CHANGE
	while((c=getchar())!='\n')
	{
		if(c>='a'&&c<='z')
		{
			c-=0x20;
			putchar(c);
		}
		else if(c>='A'&&c<='Z')
		{
			c+=0x20;
			putchar(c);
		}
		else
		{
			putchar(c);
		}
	}
	#else
	while((c=getchar())!='\n')
	{
		putchar(c);
	}
	#endif
	return 0;
}
