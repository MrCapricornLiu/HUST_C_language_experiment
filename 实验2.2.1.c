#include <stdio.h>
int main()
{ 
	int i, x, k, flag = 0;
	printf("�������жϺ��������������1����������Ctrl+Z����\n"); 
	while (scanf("%d", &x) !=EOF) 
	{
	for(i=2,k=(x>>1);i<=k;i++) 
		if (!(x%i))                                       //Ӧ�ü����ţ����ȼ��Ƚϸ� 
		{
			flag = 1;
			break;
		}		
		
		if(flag==1)
		{                                                  //ע�������е�Ӧ���ǱȽϷ��Ŷ����Ǹ�ֵ���� 
			printf("%d�Ǻ���\n", x);
			flag=0;
		}                                                  //ÿ��ִ������Ժ�Ҫ���·��س�ʼ״̬��Ҫ����û�ˡ� 
		else 
			printf("%d���Ǻ���\n", x);
	}
	
	return 0;
}
