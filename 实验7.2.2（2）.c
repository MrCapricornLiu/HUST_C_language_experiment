/*
�޸��滻create_list���������佨��һ������ȳ�������
������ȳ������ͷָ��ʼ��ָ����󴴽��Ľ�㣨��ͷ����
�󽨽��ָ���Ƚ���㣬�Ƚ����ʼ����β��㡣
*/
#include "stdio.h"
#include "stdlib.h"
struct s_list{
	int data; /* ������ */
	struct s_list *next; /* ָ���� */ 
};
void create_list (struct s_list **headp,int *p);
void free_list (struct s_list *); //����Ҫȫ���ͷŵ� 
int main(void)
{
	struct s_list *head=NULL,*p;
	int s[]={1,2,3,4,5,6,7,8,0}; /* 0Ϊ������� */
	create_list(&head,s); /* ���������� */   /////����ҲҪ�����任 
	p = head; /*����ָ��pָ����ͷ */
	while(p){
		printf("%d\t",p->data); /* ����������ֵ */
		p=p->next; /*����ָ��pָ����һ��� */
	}
	printf("\n");
	free_list(head);
	return 0;
}
void create_list(struct s_list **headp,int *p) //////ע��������޸�ͷָ�룬���Ҫ�ö�άָ�� 
{
	struct s_list *loc_head=NULL, *tail;
	if(!(*p))	/* �൱��*p==0 */
		;
	else
	{
		loc_head = (struct s_list *)malloc(sizeof(struct s_list));
		loc_head->data = *p++;
		loc_head->next = NULL;//���һ���ڵ��ֵ 
		tail = loc_head;
		while(*p)
		{	
			loc_head = (struct s_list *)malloc(sizeof(struct s_list));
			loc_head->next = tail;
			tail = loc_head;
			tail->data = *p++;
		}
	}
	*headp = loc_head;
}
void free_list (struct s_list *head)
{
	struct s_list *temp;   //Ҫ����һ�������ݴ�һ���� 
	while(head)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}  
