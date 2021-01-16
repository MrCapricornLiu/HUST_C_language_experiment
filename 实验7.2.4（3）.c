#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct s_data{
	char student_number[12];
	char name[8];
	float score[6];	//��һλ��Ӣ��ڶ�λ�Ǹߵ���ѧ������λ����ͨ��������λ��C���Գ������ 
};
struct d_list{
	struct s_data data;
	struct d_list *prior;
	struct d_list *next;
};
struct s_data input (struct s_data data, int n);
void output (struct d_list *head);
void create_d_list (struct d_list **);
void correct (struct d_list *head);
void free_list (struct d_list *head);
void calculte_average (struct d_list *head);
void super_output(struct d_list *head);
int main(void)
{
	int flag;
	struct d_list *head;
	create_d_list(&head);
	output(head);
	printf("��Ҫ�޸�������޸�������1��������޸�����0\n");
	scanf("%d",&flag);
	while(flag)
	{
		correct (head);
		printf("���޸�������޸�������1��������޸�����0\n");
		scanf("%d",&flag);
	}
	calculte_average (head);
	super_output(head);
	free_list(head);
	return 0;
}
void create_d_list (struct d_list **headp)
{
	int i=1, j, n;
	printf("������༶����\n");
	scanf("%d",&n);
	struct d_list *head = NULL, *tail;
	head = (struct d_list *)malloc(sizeof(struct d_list));
	head->data = input(head->data,i);
	tail = head;
	while(i<n)
	{
		tail->next = (struct d_list *)malloc(sizeof(struct d_list));
		tail->next->prior = tail;
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
void output (struct d_list *head)
{
	struct d_list *p = head;
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
void correct (struct d_list *head)
{
	struct d_list *p = head;
	int flag = 1;//�ж��Ƿ������ 
	char name_input[8];
	do
	{
		head = p;
		printf("��������Ҫ�޸ĵ�ѧ������\n");
		scanf("%s",name_input);
		while(head)
		{
			
			if(!strcmp(head->data.name, name_input))
			{
				flag--;
				break;
			}
			head = head->next;
		}
		if(flag)
		{
			printf("û���ҵ����ѧ���������㻹Ҫ����������\n����1���������룬����2���˳�\n");
			scanf("%d",&flag);
			if(flag == 2) break;
		}
	}while(flag);
	if(!flag)
	{
		int flag1,flag2=0;
		do
		{
			printf("��ѡ���޸ĵ�����\n1 ѧ��\n2 ����\n3 Ӣ��ɼ�\n4 �ߵ���ѧ�ɼ�\n5 ��ͨ����ɼ�\n6 C���Գɼ�\n7 �˳�\n");
			scanf("%d",&flag1);
			switch(flag1)
			{
				case 1 : printf("�������޸ĺ�ѧ�ţ�"); scanf("%s",head->data.student_number);break;
				case 2 : printf("�������޸ĺ�������"); scanf("%s",head->data.name); break;
				case 3 : printf("�������޸ĺ�Ӣ��ɼ���"); scanf("%f",&head->data.score[0]);break;
				case 4 : printf("�������޸ĺ�ߵ���ѧ�ɼ���"); scanf("%f",&head->data.score[1]);break;
				case 5 : printf("�������޸ĺ���ͨ����ɼ���"); scanf("%f",&head->data.score[2]);break;
				case 6 : printf("�������޸ĺ�C���Գ�����Ƴɼ���"); scanf("%f",&head->data.score[3]);break;
				case 7 : flag2++; break;		
			}
		}while(!flag2);
	}
}
void super_output(struct d_list *head)
{
	struct d_list *p = head;
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
void calculte_average (struct d_list *head)
{
	while(head)
	{
		head->data.score[4] = (head->data.score[0]+head->data.score[1]+head->data.score[2]+head->data.score[3]);
		head->data.score[5]	= (head->data.score[4])/4;
		head = head->next;
	}
}
void free_list (struct d_list *head)
{
	struct d_list *temp; //Ҫ����һ�������ݴ�һ���� 
	while(head)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
