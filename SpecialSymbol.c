#include<stdio.h>

extern char _excutable_start[];
extern char etext[],_etext[],_etext[];
extern char edata[],_edata[];
extern char end[],_end[];


int main()
{
	printf("Executable Start %X\n",_excutable_start);
	printf("Text END %X %X %X\n",etext,_etext,_etext);
	printf("Data END %X %X\n",edata,_edata);
	printf("Executable End %X %X\n",end,_end);

	return 0;
}
