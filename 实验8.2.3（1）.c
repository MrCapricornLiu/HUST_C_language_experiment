/*
��дһ������replace�����������з�ʽ��
�ø������ַ����滻ָ���ļ��е�Ŀ���ַ�����
����ʾ����滻�ĸ��������磬�����У�
replace filename.txt you they
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<unistd.h>
int main(int argc, char* argv[])
{//������´�stdout 
	int i=0;
	if(argc != 4)
	{
		printf("Arguments error!\n");exit(-1);
	}
	freopen(argv[1],"r+",stdin);
	freopen("C:\\Users\\dell\\Desktop\\ʵ��8\\ʵ��8.2.3(1)�����ļ���\\temp.txt","w+",stdout);
	char a[20];
	
	while(scanf("%s",a) != EOF)
	{
		if(strcmp(a,argv[2])==0)
		{
			printf("%s",argv[3]);
			putchar(' ');
			i++;
		}
		else
		{
			printf("%s",a);
			putchar(' ');
		}
	}
	
	fclose(stdin);
	fclose(stdout);
	remove(argv[1]);
	rename("C:\\Users\\dell\\Desktop\\ʵ��8\\ʵ��8.2.3(1)�����ļ���\\temp.txt",argv[1]);
	freopen("CON","w",stdout); 
	printf("\n�滻�ĸ�����%d��",i);
	return 0;
}
