#include<stdio.h>
int judge (int a);
int main(void)
{
	int n,i=0,j=0;
	
	printf("������һ��������ż��\n");
	scanf("%d",&n);
	if((n>=4)&&(n%2==0))
	{
		for(i=2;i<=(n/2);i++)
		{
			if(n==(judge(i)+judge(n-i)))
			printf("%d = %d + %d\n",n,judge(i),judge(n-i));
		}
	}
	else
		printf("�������\n");
	return 0;
}
int judge (int a)
{
	int i,flag=0;
	if(a==1) return 0;
	else if (a==2) return 2;
	else
	{
		for(i=2;i<=(a/2);i++)
		{
			if(a%i==0)
				flag=1;
			else
				continue;
		}
		if(flag==1)
			return 0;
		else
		    return a;
	}
}
