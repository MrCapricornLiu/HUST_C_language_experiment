#include<stdio.h>
#define M 20
int x[M][M];//�����洢��ת���ֵ 
void spin (int *, int, int);
int main(void)
{
	int m,n,flag;
	int a[M][M]={0},i,j;
	do
	{
		for(i=0;i<M;i++)
			for(j=0;j<M;j++)
				a[i][j] = 0, x[i][j] = 0;
		printf("���������������Լ�����(�к��о�������20)\n");
		scanf("%d%d",&n,&m);
		getchar();
		printf("��������ľ���\n");
		for(i=0;i<n;i++)
			for(j=0;j<m;j++)
			{
				a[i][j] = getchar();
				getchar();
			}
		spin(a[0],n,m);
	
		for(i=0;i<m;i++) //���������ߵ� 
		{
			for(j=0;j<n;j++)
				putchar(x[i][j]);
			printf("\n");
		}
		printf("�Ƿ���������ѡ���ǣ���ô����1���������ִ�У���ô����0\n"); 
		scanf("%d",&flag);
	}while(flag);
	
	return 0;
}
void spin (int *p, int n, int m) //n��ʾ������m��ʾ���� 
{
	int i,j;//���������m�У�n�� 
	for(i=0;i<n;i++)
		for(j=0;j<m;j++)
			x[m-1-j][i] = *(p+M*i+j);
}
