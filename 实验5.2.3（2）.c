/*˼����δ���һ����ά����*/
//ֻ����������127���� 
#include<stdio.h>
void sort (int b[],int n);  //�ı�˳��ĺ��� 

 
int main(void)
{
	int n;
	printf("please input the number of your classmate \n");
	scanf("%d",&n);
	
	char a[n][8];
	int b[n];
	printf("���������������ͳɼ���ÿ�������������س�\n"); 
	int i;
	for(i=0;i<n;i++)
	{
		scanf("%s",a[i]);
		scanf("%d",&b[i]);
	}
	sort(b,n);
	for(i=0;i<n;i++)
	{
		printf("%s",a[i]);
		printf("%5d\n",b[i]);
	}
	
	return 0;
}
void sort (int b[],int n)
{
	int i,j;
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(b[i]<b[j])
			{
				b[i]=b[i]^b[j];
				b[j]=b[i]^b[j];
				b[i]=b[i]^b[j];
			}
			else
				continue;
		}
	}
}

