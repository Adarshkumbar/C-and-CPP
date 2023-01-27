#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fp=0;
	char ch,str[10];
	fp=fopen("f1.txt","r+");					//r+ mode used to modify alr existing file
	if(fp==NULL)
	{
		printf("File doesnt exist ");
		exit(0);
	}
	fputc('X',fp);
	fputs("sicko",fp);
	fprintf(fp,"%s","man");
	fprintf(fp,"%s","Amazing");
	fprintf(fp,"%s","money");
	fprintf(fp,"%s","money");
	rewind(fp);
	fgets(str,10,fp);
	printf("%s",str);
}
