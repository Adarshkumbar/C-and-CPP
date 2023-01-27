#include <stdio.h>
#include<string.h>
int main()
{	
	int i=0,count=0,l1,l2,x,flag=0,l;
	char n[10],ch[10],temp;
	gets(n);
						//REVERSE OF A STRING
	l=strlen(n)-1;
	printf("%d\n",l);
/*	for(i=0;i<l;i++,l--)
	{	
		temp=n[i];
		n[i]=n[l];
		n[l]=temp;
		
	}*/
	strrev(n);
	//	scanf("%s",&n);
					//LENGTH OF STRING
/*	printf("%s\n",n);
	while(n[i]!='\0')
	{
		i++;
	}
	printf("Lenght=%d",i);
	count=strlen(n);
	printf("Length 2=%d",count);
	*/
					//STRING CONCATINATION
//	gets(ch);
	puts(n);
//	puts(ch);	
//	l1=strlen(n);
//	l2=strlen(ch);
//	for(i=0;i<l2;i++)
//		n[l1+i]=ch[i];
//	printf("From Self :%s\n",n);
	strcat(n,ch);
	puts(n);
					//STRING COMPARE
	x=strcmp(n,ch);
	if(x==0)
		printf("\nEqual");
	else 
		printf("\nNot Equal");
	printf("%d",x);
	
	for(i=0;n[i]!='\0'||ch[i]!='\0';i++)
		{
			if(n[i]!=ch[i])
			{
				flag=1;
				break;
			}
		}
	if(flag==1)
		printf("\nNot Equal");
	else
		printf("\nEqual;");
}
