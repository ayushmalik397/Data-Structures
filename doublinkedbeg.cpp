#include<iostream>
using namespace std;
class node
{
	public:
	node *prev;
	int data;
	node *next;
};
class list
{
	public:
	node* start;
	node* temp;
	node* newnode;
	int n,pos;
	void create_node(){
		newnode = new node();
		cin>>newnode->data;
		newnode->next=NULL;
	}
	void insert_node(){
		start=NULL;
		cin>>n;
		for(int i=0;i<n;i++){
			create_node();
			if(start==NULL){
				start=newnode;
			}
			else{
				newnode->next=start;
				start->prev=newnode;
				start=newnode;
			}
		}
	}
	void display(){
			temp=start;
			while(temp!=NULL){
				cout<<temp->data<<" ";
				temp=temp->next;
			}
			cout<<"\n";
		}
};
int main(){
	list t;
	t.insert_node();
	t.display();
}
