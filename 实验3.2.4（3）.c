#include<stdio.h>
int pow (int c,int d);  //�����������������c��d�η��ĺ����� 
int judge (int a);  //�������ʹ�����ж�nλ�����ǲ����������ĺ��� 
int c[10];
int o=0;
int main(void)
{
	int n,i=0,t;         //����i����������һ������n�Ǳ�ʾ������Ҫ��λ�� 
	printf("������һ�����֣��ҽ�������λ����������\n����0��������\n");
	scanf("%d",&n);
	while(n!=0)
	{
		for(i=pow(10,(n-1));i<pow(10,n);i++)
		{
			if(judge(i))
			{
				o++;
			}
			else
				continue;
		}
		printf("%dλ����������%d��:",n,o);
		for(t=0;t<o;t++)
		{
			printf("%8d",c[t]);
		}
		o=0;
		printf("\n");
		scanf("%d",&n);
	}
}
int judge (int a)
{
	int w=a;
	int n=0;
	for(;a!=0;n++)
	{
		a/=10;
	}
	int j=1,sum=0;
	a=w;             //����j��������һ��ѭ���Ĳ�����������sum�������������ĺ����Ƚ��ж��ǲ���������������u��Ϊ�˼�����ģ�����w��Ϊ�˽���ʼ��a����ġ� 
	for(;j<=n;j++)
	{
		sum+=pow(a%10,n);
		a/=10;
	}
	if(w==sum)
	{
		c[o]=w;
		return 1;
	}
	else
		return 0;
}
int pow (int c,int d)
{
	if(d==0)
		return 1;
	else
	{
		int q,w;                    //����q��Ϊ�˿���ѭ�������ı���������w��Ϊ�˿��Ƴ�ֵ�ĳ����� 
		for(q=1,w=c;q<d;q++)
		{
			c*=w;
		}
		return c;
	}
}
