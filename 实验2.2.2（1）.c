#include <stdio.h>
int main()
{ 
	int i, x, k, flag = 0;
	printf("�������жϺ��������������1����������Ctrl+Z����\n"); 
	while (scanf("%d", &x) !=EOF) 
	{
	for(i=2,k=(x>>1);(i<=k)&&(flag!=1);i++) 
		if (!(x%i)) 
		{
			flag = 1;
		}
		
		if(flag==1)
		{
			printf("%d�Ǻ���\n", x);
			flag=0;
		}
		else 
			printf("%d���Ǻ���\n", x);
	}
	
	return 0;
}
