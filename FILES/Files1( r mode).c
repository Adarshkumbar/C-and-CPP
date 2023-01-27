#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fp=0;
	fp=fopen("f1.txt","r");
	if(fp==NULL)
	{
		printf("File doesnt exist ");
		exit(0);
	}
	char str[30],s[20],ch;
	fputs("ARE YOU DUMB?",fp);
	ch=fgetc(fp);				//	fgetc
/*	{
			char c='F';
		fgets(str,20,fp);			//	fgets 
		fgets(s,20,fp);				// fgets to print next line of txt file without loop
		fgets(str,20,fp);
		printf("Char=%c %c and String=%s , %s ,%s",ch,c,str,s,str);	
	}
	*/
	while(!feof(fp))									// fgets to print next line of txt file with loop
	{
		fgets(str,20,fp);
		printf("char =%c and string=%s",ch,str);
	}
}
