#include <stdio.h>
unsigned long long sum_fac(int n);           //�﷨����һ������ʹ��ǰδ���� 
int main(void)
{
	int k;
    for(k=1;k<=20;k++)
        printf("k=%d\tthe sum is %llu\n",k,sum_fac(k));        //Ӧ�øĳ�llu
    return 0;
}
unsigned long long sum_fac(int n)
{
    static unsigned long long s=0;             //ע�⵽Ҫ�������ۼƺͣ����Ҫ�þ�̬���� 
    unsigned long long fac=1;                  //Ҫ��unsigned long long�Է�ֹ���� 
    int i;
   	for(i=1;i<=n;i++)
        fac*=i;
    s+=fac;
    return s;
}
