#include<stdio.h>
#include<string.h>
int main()
{
//	char c='a';
//	putchar(c);
	char *ne="NEW";
	printf("NEW=%s",ne);
	char name[10]="Adarsh",oki[]={'h','e','l','l','\t','\n','\t','b'},s='S';
	printf("size of oki=%d\n",sizeof(oki));
	puts(oki);
	puts(name);
//	gets(oki);
	printf("oki=%s",oki);
	putchar(s);
	printf("\n%c\n",s);
	printf("%s\n",&name[4]);
	printf("%s\n",&name);
	printf("%c",name[3]);
	return 0;
}
