#include<iostream>
#include<conio.h>
using namespace std;
class node{
	public :
		int data;
		node* next;
};

class list{
	public:
	node* start;
	node* temp;
	node* newnode;
	int n,pos;
	void create_node(){
		newnode=new node();
		cin>>newnode->data;
		newnode->next=NULL;
	}
	void insertion_end(){
			start = NULL;
			cin>>n;
			for(int i=0;i<n;i++){
				create_node();
				if(start==NULL){
					start=newnode;
				}
				else{
					temp=start;
					while(temp->next!=NULL){
						temp=temp->next;
					}
					temp->next=newnode;
				}
			}
		}
		void delnode(){
			temp=start;
			if(pos==1){
				start=temp->next;
			}
			else{
				for(int i=0;i<(pos-2);i++){
					temp=temp->next;
		}
		temp->next=temp->next->next;
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
	t.insertion_end();
	t.display();
	cout<<"Enter the pos of the node to be deleted: ";
	cin>>t.pos;
	t.delnode();
	t.display();
}
