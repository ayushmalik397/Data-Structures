#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

struct Stack{
    char c[100000];
    int top;
};
typedef struct Stack stack;
stack st;
void push(char c)
{
    st.c[++(st.top)] = c;
}
char pop()
{
    char a;
    
    a = st.c[(st.top)--];
    return a;
}
char* isBalanced(char* s) {
    st.top = -1;
    char f='a',p;
    int l,f1 = 0,i;
    l = strlen(s);
    for(i = 0; i < l; i++)
    {
        if(s[i] == '[' || s[i] == '{' || s[i] == '(')
        {
            push(s[i]);
        }
        else if(s[i] == ']' || s[i] == '}' || s[i] == ')')
        {
            p = pop();
          //  printf("p : %c\n%c",p,s[i]);
            if(s[i] == ')' && p == '(' || s[i] == '}' && p == '{' || s[i] == ']' && p == '['){
                f1 = 0;
                continue;
            }
            else
            {
                f1 = 1;
                //printf("NO\n");
                break;
            }
                
        }
    }
    if(f1 == 0 && st.top == -1)
    {
        printf("YES\n");
    }
    else 
        printf("NO\n");
    return f;
}



int main() {
    int t; 
    scanf("%i", &t);
    for(int a0 = 0; a0 < t; a0++){
        char* s = (char *)malloc(512000 * sizeof(char));
        scanf("%s", s);
        int result_size;
        char* result = isBalanced(s);
       // printf("%s\n", result);
    }
    return 0;
}
