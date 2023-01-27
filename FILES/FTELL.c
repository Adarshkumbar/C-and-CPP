#include<stdio.h>
#include<string.h>
int main()
{
	//printf("%d\n",sizeof("\n"));
	char str[20],ch;
	FILE *fp;
	fp=fopen("f1.txt","r+");
	printf("Posi=%d\n",ftell(fp));
	
	//HOW TO FIND LENGTH OF FILE
	fseek(fp,0,SEEK_END);
	printf("LENGTH=%d\n",ftell(fp));
		
	fseek(fp,12,SEEK_SET);
	printf("Posi=%d\n",ftell(fp));
	
	
	ch=fgetc(fp);
	//fp moves after above line
	printf(" posi=%d and %c\n ",ftell(fp),ch);
}
