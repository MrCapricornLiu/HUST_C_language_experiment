#include<stdio.h>
int main()
{
	double wage ,s1=0 ,s2=0 ,s3=0 ,s4=0 ,s5=0;                 //s�����˸��������˰�ն�� 
	printf("���������Ĺ���\n");
	scanf("%lf",&wage);
	if (wage>=5000)
	{ 
		s1=50;
		s2=100;
		s3=150;
		s4=200;
		s5=(wage-5000.000)*0.25;
	} 
	else if ((wage>=4000)&&(wage<5000))
	{ 
		s1=50;
		s2=100;
		s3=150;
		s4=(wage-4000.000)*0.2;
	} 
	else if ((wage>=3000)&&(wage<4000))
	{ 
		s1=50;
		s2=100;
		s3=(wage-3000.000)*0.15;
	} 
	else if ((wage>=2000)&&(wage<3000))
	{
		s1=50;
		s2=(wage-2000.000)*0.1;
	} 
	else if ((wage>=1000)&&(wage<2000))
	s1=(wage-1000.000)*0.05;
	printf("������Ҫ����˰����%.3f\n",(s1+s2+s3+s4+s5)); 
	
	return 0; 
} 
