#include<stdio.h>
#include<conio.h>
#include<string.h>

#define MAX 100

int top=-1;
int item;
char s[MAX];

void pushchar(char item);
char popchar(void);

void main()
{
	char str[MAX];
	int i;
	clrscr();
	printf("Input a string::");
	scanf("%s",&str);
	for(i=0;i<strlen(str);i++)
	pushchar(str[i]);

	for(i=0;i<strlen(str);i++)
	str[i]=popchar();

	printf("Reversed string is :%s\n",str);
	getch();
}
void pushchar(char item)
{
	if(top==MAX-1)
	{
		printf("\n stack is full !!\n");
		return;
	}
	else
	{
		top=top+1;
		s[top]=item;
	}
}
char popchar()
{
	if(top==-1)
	{
		printf("\n stck is EMPTY !!\n");
		return 0;
	}
	else
	{
		item=s[top];
		top=top-1;
		return item;
	}
}