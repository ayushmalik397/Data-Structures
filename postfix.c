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
	char ch[20], c;
	int d, e, f;
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
			push(c);
		}
		else
		{
			d = pop()-'0';
			e = pop()-'0';
			printf("%d %d popped",d,e);
			switch(c)
			{
				case '+':
					f = d + e;
					break;
				case '-':
					f = d - e;
					break;
				case '*':
					f = d * e;
					break;
				case '/':
					f = d / e;
			}
			push(f);
		}
	}
	int c1;
	c1 = pop();
	printf("%d",c1);
}
