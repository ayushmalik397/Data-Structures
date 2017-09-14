#include<stdio.h>
#include<stdlib.h>

struct tree
{
    int data;
    struct tree left;
    struct tree right;
};
typedef struct tree node;
node* t;

struct stack
{
    int data;
    int top;
};
typedef struct stack st;

void zigzag(t)
{
    st s;
    s.push(t)
    bool reverse = false;
    while(s != NULL)
    {
        st s2;
        while(s2 != NULL)
        {
            t1 = s.pop();
            printf("%d",t1);
            if(reverse == true)
            {
               s2.push(t->left->data);
                s2.push(t->right->data);
            }
            else
            {
                s2.push(t->right->data);
                s2.push(t->left->data);
            }
       

void insert(node* t, int a)
{
    if(t == NULL)
    {
        t->data = a;
        t->left = NULL;
        t->right = NULL;
        return t;
    }
    if(t->data < a)
    {
        return insert(t->right, a);
    }
    return insert(t->left, a);
}

int main()
{
    int n, a;
    printf("Enter the number of elements");
    scanf("%d",&n);
    t = (node*)malloc(sizeof(node));
    for(i = 0; i < n; i++)
    {
        scanf("%d",&a);
        insert(t,a);
    }
    zigzag(t);
}
