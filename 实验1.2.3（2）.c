#include<stdio.h>
int main(void)
{
	unsigned short x,m,n;
	printf("����������x��ֵ��ʮ���������룬m��n��ʮ��������\n����ע��һ��m��0��15��������n��0��16-m������\n�����������룬x,m,n\n");
	while(scanf("%hx%hd%hd",&x,&m,&n)!=EOF)
	{
			if (m>=0&&m<=15&&n>=1&&n<(16-m))
		{
			x>>=m;
			x<<=(16-n);
			printf("ans=%#x\n",x);	
		}   
 		
		else   
		printf("�������!\n"); 
	}
	
	
		return 0;
}

	
