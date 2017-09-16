#include<stdio.h>

typedef struct node
{
    int data;
    struct node *next;
}nn;

int main()
{
    int a = 10;
    int b = 20;
    nn* head = NULL;
    insertAtBegin(&head, a);
    insertAtLast(&head, b);
    while(head!=NULL)
    {
        printf("%d",head->data);
        head = head->next;
    }
}

void insertAtBegin(nn** h, int v)
{
    nn* n = (nn*)malloc(sizeof(nn));
    n->data = v;
    n->next = NULL;
    *h = n;
}

void insertAtLast(nn** h, int v)
{
    if(h == NULL)
    {
	insertAtBegin(h, v);
    }
    else
    {
	nn* curr = NULL;
	curr = h;
	while(curr != NULL)
	{
	    curr = curr->next;
	}
	nn* newnode = (nn*)malloc(sizeof(nn));
	newnode->data = v;
	newnode->next = NULL;
	curr->next = newnode;
	*h = curr;
    }
}
