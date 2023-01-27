#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	FILE *fp=NULL;
	fp=fopen("f1.txt","a+");						// a mode
	char str[30],ch;
	if(fp==NULL)
	{
		printf("ERROR");
		exit(0);
	}
	while(!feof(fp))
	{
		ch=fgetc(fp);
		printf("%c",ch);
	}
	fputs(" HENLO ",fp);
	fclose(fp);	
}
