#include<stdio.h>
#define M 10 
#define N 3
int main(void)
{
	int a[M], b[M];	
	int i, j, k;
	int q;
	for(i = 0; i < M; i++)
		a[i] = i + 1;
	for(i = M, j = 0; i > 1; i--)
	{
		for(k = 1; k <= N; k++)			/* 1��N���� */
		{
			if(!(a[j]))  //�˲���������������a�����еĿ�Ԫ�� 
			{
				if(j < M-1)
				{
					j++;//��һ�������½���һ�� 
					k--;//��һ����������k����ԭ���Ǹ�ֵ 
					continue;
				}
				else
				{
					j=0;
					k--;
					continue;
				}
			}
			if(++j > M-1 )
			{
				j = 0;
			}
		}
		if(j)
			b[M-i] = a[j-1];
		else
		{
			for(q=M;!a[q-1];q--);//�ҵ����һ�����ǿ�Ԫ�صļ��� 
			b[M-i] = a[q-1];
		}
		if(j)
			a[j-1]='\0';
		else
			a[q-1]='\0';
	}
	
	for(i = 0;i < M-1; i++)		/* �����������Ȧ�˵ı�� */
		printf("%6d",b[i]);
	for(i=0;i < M-1;i++)
	{
		if(a[i])
		printf("\n%6d", a[i]);
	}
	
	return 0;
}
