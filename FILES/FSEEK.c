#include<stdio.h>
#include<string.h>
#pragma pack(1)
int main()
{
	char str[20],ch;
	FILE *fp;
	fp=fopen("f1.txt","r+");

	fseek(fp,1,SEEK_SET);
	fgets(str,10,fp);
	printf("%s\n",str);
	
	fseek(fp,5,SEEK_CUR);
	ch=fgetc(fp);
	printf("%c\n",ch);

	fseek(fp,-,SEEK_END);
	ch=fgetc(fp);
	printf("%c\n",ch);	
}
