#include <stdio.h>
int main()
{ 
	int i, x, k, flag = 0;
	printf("�������жϺ��������������1����������Ctrl+Z����\n"); 
	while (scanf("%d", &x) !=EOF) 
	{
		if(x==2)
			printf("%d���Ǻ���\n", x);
		else
		{
			i=2;                   //ע�⣬k����2��ʱ���ֱ��ִ�� 
			do
			{
				k=x>>1;
				if (!(x%i)) 
				{
					flag = 1;
					break;
				}	
			    ++i;
			}
			while(i<=k);  
			if(flag==1)
			{
				printf("%d�Ǻ���\n", x);
				flag=0;
			} 
			else 
				printf("%d���Ǻ���\n", x);
		}
		
	}
	
	return 0;
}
