#include<stdio.h>
#include<string.h>

struct tack
{
	char a[10];
	int top;
};
typedef struct tack st;
st st1;

void push(char b)
{
	st1.a[++(st1.top)] = b;
//	printf("%d",st1.a[st1.top]);
//	printf("Pushed \n");
}

char pop()
{
//	int c;
	return st1.a[(st1.top)--];
//	return c;
}

void main()
{
	st1.top = -1;
	char ch[20], c, d, e, f;
	printf("Enter the expression");
	scanf("%s",ch);
	int l, i;
	l = strlen(ch);
	for(i = 0; i < l; i++)
	{
		c = ch[i];
		if(isdigit(c))
		{
			printf("%c\n",c);
			push(c-48);
		}
		else
		{
			d = pop();
			e = pop();
			printf("%c %c popped",d,e);
			switch(c)
			{
				case '+':
					f = d + e;
