#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	FILE *fp=NULL;
	fp=fopen("f1.txt","w");						// w mode
	if(fp==NULL)
	{
		printf("ERROR");
		exit(0);
	}
	char str[]="ADARSH B KUMBAR";
	for(int i=0;i<=strlen(str);i++)
		fputc(str[i],fp);						// fputc
	fputs("\n",fp);								// fputs
//	fprintf(fp,"%d  %s  %f",10,"YOO",69.69);	// fprints
	fclose(fp);	
}
