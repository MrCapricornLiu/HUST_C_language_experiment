/*ʵ��4-3���ٵ������������R����Բ�����s*/ 
#include<stdio.h> //δ����ͷ�ļ��� 
#include<assert.h>//δ��ǰ����assert�ĺꡣ 
#define  R

int integer_fraction(float x);//δ���������塣 
int main(void)
{
	float  r, s;
	int s_integer=0;
    printf ("Input a number: ");
    scanf("%f",&r);
    #ifdef  R
       s=3.14159*r*r;
       printf("Area of round is: %f\n",s);
       s_integer=integer_fraction(s);
       if((s-s_integer)<0.5)
       {
			assert((s-s_integer)<0.5);
	   }
       else
       {
       	    assert((s-s_integer)>0.5);
    		s_integer++; 
	   }
	   printf("The integer fraction of area is %d\n", s_integer);
    #endif
    return 0;
}

int integer_fraction(float x)//ʵ�ֱ������͵�ת���� 
{
  int i=x;
  return i;
}
