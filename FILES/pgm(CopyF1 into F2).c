#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	FILE *fp1,*fp2;
	char ch;
	fp1=fopen("f1.txt","r");	//fp1
	if(fp1==NULL)
	{
		printf("Error");
		exit(1);
	}
	fp2=fopen("f2.txt","w");	//fp2
	if(fp2==NULL)
	{
		printf("Error");
		exit(1);
	}
/*	while(!feof(fp1))       
	{
		ch=fgetc(fp1);
		if(ch==EOF)
			break;
		printf("%c",ch);
		fputc(ch,fp2);	
	}*/
	
	//alternate method
	while((ch=fgetc(fp1))!=EOF)
	{
		printf("%c",ch);
		fputc(ch,fp2);	
	}
	fclose(fp1);
	fclose(fp2);
}

