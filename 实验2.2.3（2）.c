#include<stdio.h>
enum{COPY ,DELETE};
int main(void)
{
	char c;
	int state = COPY;
	printf("������һ�����£��һὫ�м�Ķ���ո���һ��,�������Իس��ټ�Ctrl+Z��β\n");
	while((c=getchar())!=EOF)
	{
		switch(state)
		{ 
		case COPY : (c==' ') ?  (state=DELETE,putchar(' ')): (putchar(c),state=COPY); break ;    //״̬COPY���ܵ��� ��ʱת��Ϊdeleteģʽ�����򲻱� 
		case DELETE : (c==' ') ? state=DELETE : (putchar(c),state=COPY); break ;  //״̬DELETE���ܵ��� ��ʱ��������������� �� 
		}
	}
	return 0;
} 
