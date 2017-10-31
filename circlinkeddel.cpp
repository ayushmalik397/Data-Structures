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
					newnode->next=start;
				}
				else{
					temp=start;
					while(temp->next!=start){
						temp=temp->next;
					}
					temp->next=newnode;
					newnode->next=start;
				}
			}
		}
	void del(){
		temp=start;
		if(pos==1){
			start=temp->next;
			while(temp->next!=start){
				temp=temp->next;
			}
			temp->next=start;
		}
		else if(pos==(n-1)){
			for(int i=0;i<pos-2;i++){
				temp=temp->next;
			}
			temp->next=start;
		}
		else{
			for(int i=0;i<pos-2;i++){
				temp=temp->next;
			}
			temp->next=temp->next->next;
		}
		
		}
	void display(){
		temp=start;
		if (start!= NULL)
		{
    	do
        {
            cout<<temp->data<<" ";
            temp = temp->next;
        }
        while (temp != start);
    }
	}
		
};
int main(){
	list t;
	t.insertion_end();
	t.display();
	cout<<"Enter the position: ";
	cin>>t.pos;
	t.del();
	t.display();
}
