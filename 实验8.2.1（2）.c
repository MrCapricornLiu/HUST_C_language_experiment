#include <stdio.h>
int main(void)
{
	short a=0x253f,b=0x7b7d;
	char ch;
	FILE *fp1,*fp2;
	fp1=fopen("d:\\abc1.bin","wb+");
    fp2=fopen("d:\\abc2.txt","w+");
	fwrite(&a,sizeof(char),1,fp1);
	fwrite(&b,sizeof(char),1,fp1);   
	fprintf(fp2,"%hx %hx",a,b);

    rewind(fp1); rewind(fp2);

/*	short c[2];
    fread(c,sizeof(short),2,fp1);//因为这样只读了一位进来 
    printf("%hx %hx\n",c[0],c[1]);*/ 
	
	while((ch = fgetc(fp1)) != EOF) //注意储存是以2进制表示的 
		putchar(ch);
	putchar('\n');
	while((ch = fgetc(fp2)) != EOF) 
		putchar(ch);
	putchar('\n');

	fclose(fp1);
	fclose(fp2);
	return 0;
}
