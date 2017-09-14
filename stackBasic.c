#include<stdio.h>
struct Stack
{
    int a[5];
    int top;
};
typedef struct Stack Sta;
Sta st;

void push(int i)
{
    if(st.top == 4)
    {
        printf("Overflow\n");
        return;
    }
    st.a[++(st.top)] = i;
}

int pop()
{
    if(st.top == -1)
    {
        printf("Underflow\n");
        return 0;
    }
    return st.a[(st.top)--];
}

void main()
{
    st.top = -1;
    push(1);
    push(2);
    push(3);
    push(4);
    push(5);
    push(1);
    push(1);
    pop();
    pop();
    pop();
    pop();
    pop();
    pop();
}
