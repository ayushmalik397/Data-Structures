#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int key;
    struct Node* left;
    struct Node* right;
};

typedef struct Node node;

node* head;

void insert(int k, node* head)
{
    node* newnode = (node*)malloc(sizeof(node));
    newnode->key = k;
    newnode->left = NULL;
    newnode->right = NULL;
    if(head == NULL)
        head = newnode;
    else if(head->key > k)
        head->right = insert(k,head->right);
    else if(head->key < k)
        head
}

int main()
{
    head = NULL;
    insert(10);
    insert(5);
    insert(20);
}
