#include<stdio.h>
int main()
{
	int x ,y ,i ,j ;                                     //i��ʾ������j��ʾ���� 
	printf("����������\n");
	scanf("%d",&y);
	for(i=0;i<=(y-1);i++)                                 //�����������ӵ�0�п�ʼ ���ӵ�0�п�ʼ 
	{
		for(j=1;j<=(40-2*i);j++)
			putchar(' ');
		for(x=1,j=0;x>=1;x=x*(i-j+1)/j)                       //�������xС��1����j���ܱ�i�� 
		{
			printf("%4d",x);                                 //ע��Ҫ��ǰ���������ո���һ����ĸ��ʱ�� 
			j++;
		}
		printf("\n");
	}
	return 0;
}
