/*
���һ���ֶνṹstruct bits��
����һ��8λ�޷����ֽڴ����λ�����λ����Ϊ8���ֶΣ�
���ֶ�����Ϊbit0, bit1, ��, bit7����bit0�����ȼ���ߡ�
ͬʱ���8����������8�����������ִ���һ������ָ������p_fun��
���bit0Ϊ1������p_fun[0]ָ��ĺ�����
���struct bits���ж�λΪ1��
��������ȼ��Ӹߵ������ε��ú���ָ������p_fun����ӦԪ��ָ��ĺ�����
8�������еĵ�0�������������Ϊ��
void f0( int n)
{
	printf(��the function %d is called!\n��,n);
}
*/
#include<stdio.h>
void f0(int n){printf("the function %d is called!\n",n);} 
void f1(int n){printf("the function %d is called!\n",n);}
void f2(int n){printf("the function %d is called!\n",n);}
void f3(int n){printf("the function %d is called!\n",n);}
void f4(int n){printf("the function %d is called!\n",n);}
void f5(int n){printf("the function %d is called!\n",n);}
void f6(int n){printf("the function %d is called!\n",n);}
void f7(int n){printf("the function %d is called!\n",n);}

struct bits{
	unsigned short int bit0 : 1; 
	unsigned short int bit1 : 1; 
	unsigned short int bit2 : 1; 
	unsigned short int bit3 : 1; 
	unsigned short int bit4 : 1; 
	unsigned short int bit5 : 1; 
	unsigned short int bit6 : 1; 
	unsigned short int bit7 : 1; 
};
union byte{
	char c;
	struct bits bits_0;
};
int main(void)
{
	void (*pf[8]) (int) = {f0,f1,f2,f3,f4,f5,f6,f7};
	union byte byte_0 = {0};
	printf("������һ���ַ����һ����ASCLL����Ⱥ���\n");
	byte_0.c = getchar();
	if(byte_0.bits_0.bit0) 
		pf[0](0);
	if(byte_0.bits_0.bit1)
		pf[1](1);
	if(byte_0.bits_0.bit2)
		pf[2](2);
	if(byte_0.bits_0.bit3)
		pf[3](3);
	if(byte_0.bits_0.bit4)
		pf[4](4);
	if(byte_0.bits_0.bit5)
		pf[5](5);
	if(byte_0.bits_0.bit6)
		pf[6](6);
	if(byte_0.bits_0.bit7)
		pf[7](7);
	return 0;
}
