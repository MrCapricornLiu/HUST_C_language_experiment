#include<stdio.h>
#include<math.h>
#define s(a,b,c) ((a+b+c)/2)
#define area(s,a,b,c) pow((s)*(s-a)*(s-b)*(s-c),0.5)  //�������ж������͵������� 
int main(void)
{
	double s,a,b,c;
	printf("input a,b,c\n");
	scanf("%lf%lf%lf",&a,&b,&c);
	if((a+b>c)&&(a+c>b)&&(b+c>a))
	{
		printf("s=%lf\n",s(a,b,c));
		s=s(a,b,c);
		printf("area=%lf\n",area(s,a,b,c));
	}
	else
		printf("�޷�����������\n");
	
	return 0;
}
