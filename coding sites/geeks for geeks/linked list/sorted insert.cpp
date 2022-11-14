#include <iostream>
using namespace std;
class node{
public:
	int data;
	node* next_address;
	node(int x){
		data = x;
		next_address = NULL;
	}

};

void print_linked(node* head){

	while(head!=NULL){
		cout<<head->data<<endl;
		head = head->next_address; 
	}
}
void sorted_insert(node* head , int item){
	node* temp = head;
	while(temp->next_address->data<item){
		temp = temp->next_address;
	}
	node* newnode = new node(item);
	newnode->next_address = temp->next_address;
	temp->next_address = newnode;


}
int main(){
	node* n1 = new node(34);
	node* n2 = new node(45);
	node* n3 = new node(90);
	node* head = n1;
	head->next_address = n2;
	n2->next_address = n3;
	print_linked(head);
	sorted_insert(head,47);
	cout<<"updated list"<<endl;
	print_linked(head);
	
}