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
	int n;
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
        cout<<temp->data<<" "<<temp->next->data;
    }
	}
		
};
int main(){
	list t;
	t.insertion_end();
	t.display();
}
