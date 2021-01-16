#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct s_data{
	char student_number[12];
	char name[8];
	float score[6];	//��һλ��Ӣ��ڶ�λ�Ǹߵ���ѧ������λ����ͨ��������λ��C���Գ������ 
};
struct s_list{
	struct s_data data;
	struct s_list *next;
};
void create_list (struct s_list **headp);
struct s_data input (struct s_data, int);
void output (struct s_list *head);
void calculte_average (struct s_list *head);
void super_output(struct s_list *head);
void free_list (struct s_list *head);
void sort_point (struct s_list **head);
int main(void)
{
	int flag = 0;
	float average; 
	struct s_list *head;
	
	create_list(&head);
	output(head);
	calculte_average (head);
	super_output(head);
	sort_point(&head);
	super_output(head);
	free_list(head);
	return 0;
}
void create_list (struct s_list **headp)
{
	int i=1, n;
	printf("������༶����\n");
	scanf("%d",&n);
	struct s_list *head = NULL, *tail;
	head = (struct s_list*)malloc(sizeof(struct s_list));
	head->data = input(head->data, i);
	tail = head;
	while(i<n)
	{
		tail->next = (struct s_list*)malloc(sizeof(struct s_list));
		tail = tail->next;
		i++;
		tail->data = input(tail->data,i);
	}
	tail->next = NULL;
	*headp = head;
}
struct s_data input (struct s_data data, int n)
{
	printf("�������%d���˵���Ϣ\n",n);
	printf("ѧ�ţ�"); scanf("%s",data.student_number);
	printf("������"); scanf("%s",data.name);
	printf("Ӣ��ɼ���"); scanf("%f",&data.score[0]);
	printf("�ߵ���ѧ�ɼ���"); scanf("%f",&data.score[1]);
	printf("��ͨ����ɼ���"); scanf("%f",&data.score[2]);
	printf("C���Գ�����Ƴɼ���"); scanf("%f",&data.score[3]);
	return data;
}
void output (struct s_list *head)
{
	struct s_list *p = head;
	printf("%9s%12s%15s%15s%18s%18s\n","ѧ��","����","Ӣ��ɼ�","�ߵ���ѧ�ɼ�","��ͨ����ɼ�","C���Գ�����Ƴɼ�");
	while(p)
	{
		printf("%9s\t",(p->data).student_number); 
		printf("%6s\t\t",(p->data).name);
		for(int i=0; i<4; i++)
			printf("%0.2f\t\t",(p->data).score[i]);
		printf("\n");
		p = p->next;
	}
}
void super_output(struct s_list *head)
{
	struct s_list *p = head;
	printf("%9s%12s%15s%15s\n","ѧ��", "����", "�ܳɼ�", "ƽ���ɼ�");
	while(p)
	{
		printf("%9s\t",(p->data).student_number); 
		printf("%6s\t\t",(p->data).name);
		for(int i=4; i<6; i++)
			printf("%0.2f\t\t",(p->data).score[i]);
		printf("\n");
		p = p->next;
	}
}
void calculte_average (struct s_list *head)
{
	while(head)
	{
		head->data.score[4] = (head->data.score[0]+head->data.score[1]+head->data.score[2]+head->data.score[3]);
		head->data.score[5]	= (head->data.score[4])/4;
		head = head->next;
	}
}
void sort_point(struct s_list **head)
{
	struct s_list *pre1, *pre2, *p1, *p2, *temp;
	p1 = (struct s_list *)malloc(sizeof(struct s_list));
	p1->next = *head; 
	pre1 = p1;
	int flag = 1;
	*head = p1; //�����Ƭ���� 
	for(p1=pre1->next; p1->next; pre1=p1, p1=p1->next)
		for(p2=p1->next, pre2=p1, flag = 1; p2; pre2=p2, p2=p2->next,flag = 0)
		{
			if(flag&&(p1->data.score[5] > p2->data.score[5]))
			{
				pre1->next = p2;
				p1->next = p2->next;
				p2->next = p1;
				temp = p1; p1 = p2; p2 = temp;
			}
			if((!flag)&&(p1->data.score[5] > p2->data.score[5]))
			{
				pre1->next = p2;
				pre2->next = p1;
				temp = p2->next;
				p2->next = p1->next;
				p1->next = temp;
				temp = p1; p1 = p2; p2 = temp;  //������ָ�뽻��������������ѭ��
			}
		}
	p1 = (*head);
	(*head) = (*head)->next;
	free(p1);
}
void free_list (struct s_list *head)
{
	struct s_list *temp; //Ҫ����һ�������ݴ�һ���� 
	while(head)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
