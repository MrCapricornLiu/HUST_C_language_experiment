#include<stdio.h>
#include<string.h>
#include<math.h>
#define BASE 32 //64λ����� 
void reverse (char a[]);
int main(void)
{
	int x,y,i,j;
	printf("������һ������(С��2��32�η�)�����Ի��ڶ�����չʾ\n");
	while(scanf("%d",&x)!=EOF)
	{
		char c[BASE+1];
		c[BASE]='\0';
		if(x>0)
		{
			for(i=0;i<BASE;i++)
			{
				c[i] = '0';
			}
			for(i=0;x>=1;i++)
			{
				y=(x%2);
				c[i]=(y+'0');
				x/=2;
			}
			reverse(c);
			printf("%s",c);
		}
		else if(x<0)
		{
			x=-x;
			x=x^((int)(pow(2,BASE)-1));
			c[BASE-1]='1';
			x++;
			for(i=0;x>=1;i++)
			{
				y=(x%2);
				c[i]=(y+'0');
				x/=2;
			}
			reverse(c);
			printf("%s",c);
		}
		else
		{
			for(i=0;i<BASE;i++)
			{
				c[i] = '0';
			}
			printf("%s",c);
		}
		printf("\n���ٴ����룬�����Ҫ�˳�������Ctrl+Z\n");
	}
	
	return 0;
}
void reverse (char a[])
{
	int c,j,k;
	for(j=0,k=strlen(a)-1;j<k;j++,k--)
	{
		c=a[j];
		a[j]=a[k];
		a[k]=c;
	}
}
