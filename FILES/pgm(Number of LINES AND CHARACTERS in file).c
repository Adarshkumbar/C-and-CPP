// Program to Count number of lines and no. of characters in a file
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	FILE *fp;
	int count=1,c=0;
	char ch;
	fp=fopen("f1.txt","r");
	if(fp==NULL)
	{
		printf("FILE DOESNT EXIST!");
		exit(1);
	}
	while((ch=getc(fp))!=EOF)			// or while(ch=getc(fp)!=EOF)
	{
		//ch=getc(fp);
		if(ch=='\n')
			count++;
		if(ch!=' ' && ch!='\n' && ch!='\0' && ch!='\t')
			c++;
	}
	printf("No of lines=%d and Characters=%d",count,c);
	fclose(fp);
}

