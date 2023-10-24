#include<stdio.h>
#define PI 3.14159
int main (void)
{
   int f ;
   int p, k ;
   int newint; 
   double c, r, s ;

/* ????1 */
   printf("Input Fahrenheit: " ) ;
   scanf("%d",&f);                                             //???е??????δ???????????,????f?δ??&???? 
   c = 5.0/9.0*(f-32);                                              //???????????? 
   printf( "\n %d (F) = %.2f (C)\n\n ", f, c ) ;                //???е??????δ??????????? 

/* ????2 */
   
   printf("input the radius r:");
   scanf("%lf", &r);
   s=PI*r*r;                                                         
   printf("\nThe acreage is %.2f\n\n",s);                          //???ü? & ???? 

/* ????3 */
   k = 0xa1b2, p = 0x8432; 
   newint = (p & 0xff00)|(k>>8 & 0x00ff);                                           //newintδ???? 
   printf("new int = %#x\n\n",newint);                            
   
   // 这是一行非常牛逼的注释
   return 0;
}
