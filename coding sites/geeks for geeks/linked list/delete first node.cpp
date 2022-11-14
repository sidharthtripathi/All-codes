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
void insert_at_begin(node* &head , int item){
node* newnode = new node(item);
newnode->next_address  = head;
head = newnode;

}
void insert_at_last(node* head , int item){
	while(head->next_address !=NULL){
		head = head->next_address;
	}
	node* newnode = new node(item);
	head->next_address = newnode;

}
void delete_first_node(node* &head){
	if(head == NULL)
		return;
node* temp = head;
head = head->next_address;
delete temp;

}
int main(){
	node* n1 = new node(34);
	node* n2 = new node(45);
	node* n3 = new node(90);
	node* head = n1;
	head->next_address = n2;
	n2->next_address = n3;
	print_linked(head);
	insert_at_begin(head,88);
	insert_at_last(head,44);
	delete_first_node(head);
	cout<<"new linked list"<<endl;
	print_linked(head);

}