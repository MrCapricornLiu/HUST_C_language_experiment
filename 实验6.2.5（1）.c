/*
����Nλ������MλС����N=20��M=10��������a,b����̼���a+b����������
�磺12345678912345678912.1234567891 + 98765432109876543210.0123456789
*/ 
//����˼���Ǵ�����������ֱ𴢴��������ֺ�С������
//Ȼ������λ�ƺ��������������ͷ������
//Ȼ��ע���ʱ��λ��ͷ����λ��β�� 
#include<stdio.h>
#define N 20
#define M 10

void shift_a (int *);//���������ֶ��� 
int judge_c (int *);//�жϵ�һ����0���� 
int main(void)
{
	int i,j; 
	int a1[N+1]={0},a2[N+1]={0},a3[N+1]={0};//�洢����
	int c1[M]={0},c2[M]={0},c3[M+1]={0};//�洢С��
	
	printf("�������һ������\n");
	for(i=N; a1[i+1] != '.'; i--)//����С����Ϊֹ 
		a1[i]=getchar();
	i++,a1[i]=0;
	for(i=M-1; c1[i+1] != '\n'; i--)
		c1[i]=getchar();
	i++,c1[i]=0;
	printf("������ڶ�������\n");
	for(i=N; a2[i+1] != '.'; i--)//����С����Ϊֹ 
		a2[i]=getchar();
	i++,a2[i]=0;
	for(i=M-1; c2[i+1] != '\n'; i--)
		c2[i]=getchar();
	i++,c2[i]=0;
	
	shift_a(a1);
	shift_a(a2);
	
	int flag0,k;//�α�flag0�������Ƚ�С������˭����һЩ
	flag0 = (judge_c(c1) < judge_c(c2)) ? (judge_c(c1)) : (judge_c(c2));
	k=flag0;
	
	for(i=0;i<N+1;i++)
		a1[i]-='0',a2[i]-='0';
	for(i=0;i<M;i++)
		c1[i]-='0',c2[i]-='0';
	
	int carry=0;
	for(i=0;i<N;i++)
	{
		*(a3+i) = *(a1+i) + *(a2+i) + carry;
		carry = (*(a3+i)-*(a3+i)%10)/10;
		*(a3+i)%=10,*(a3+i)+='0';
	}
	*(a3+N)=carry+'0';
	
	for(carry=0;k<M;k++)
	{
		*(c3+k) = *(c1+k) + *(c2+k) + carry;
		carry = (*(c3+k)-*(c3+k)%10)/10;
		*(c3+k)%=10,*(c3+k)+='0';
	}
	*(a3+0) += carry;//�ѽ�λ�͸���������
	
	for(i=0;;i++)
	{
		if(*(a3+i)=='0'+10)
		{
			*(a3+i) = '0';
			*(a3+i+1) += 1;
		}
		else
			break;
	}
	
	int flag1=0;
	for(i=N;i>=0;i--)
	{
		if(flag1==0 && *(a3+i) != '0')
			flag1=1;
		if(flag1==1)
			putchar(*(a3+i));
	}
	putchar('.');
	for(k=M-1;k>=flag0;k--)
		putchar(*(c3+k));
	
	return 0;
}
void shift_a (int *p)
{
	int i=0,j;
	while(!(*(p+i))) i++;
	for(j=0; i<N+1; i++,j++)
		*(p+j)=*(p+i);
	for(; j<N+1; j++)//�������ֵ��ֵ��0 
		*(p+j)='0';
}
int judge_c (int *p)
{
	int k=0;
	while(!(*(p+k))) k++;
	return k;
}
