#include<stdio.h>
#include<stdlib.h>

typedef struct Node
{
	int data;
	struct Node* next;
}nn;

nn* head = NULL;

void insertNode(int d)
{
//	nn* head = NULL;
	nn* temp = (nn*)malloc(sizeof(nn));
	nn* ptr;
	//nn* curr = (nn*)malloc(sizeof(nn));
	//curr = head;
	if(head == NULL)
	{
		temp->data = d;
		temp->next = NULL;
		head = temp;
	}
	else
	{
		ptr = head;
		while(ptr->next != NULL)
		{
			ptr = ptr -> next;
		}
		temp -> data = d;
		temp->next = NULL;
		ptr->next = temp;
	}
}

void reverseNode()
{
    nn* prev;
    nn* next;
    nn* current;
    prev = NULL;
    current = head;
    //next = current->next;
    //prev->next = NULL;
    while(current!=NULL)
    {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    head = prev;
}
nn* pre = NULL;
nn* nex;
//nn* curre;
//pre = NULL;
void reverseRecursive(nn* curre)
{
	nex = curre -> next;
	curre -> next = pre;
	pre = curre;
	curre = nex;
	while(curre != NULL)
	{
		reverseRecursive(curre);
	}
	head = pre;
}

void showNode()
{
	while(head != NULL)
	{
		printf("%d",head->data);
		head = head->next;
	}
}

void main()
{
	int n, i, data;
	scanf("%d",&n);
	//nn* head = NULL;
	for(i = 0; i < n; i++)
	{
		scanf("%d",&data);
		insertNode(data);
	}
	nn* curr;
	curr = head;
//	reverseNode();
	reverseRecursive(curr);
//	for(i = 0; i < n; i++)
//	{
		showNode();
//	}
}
