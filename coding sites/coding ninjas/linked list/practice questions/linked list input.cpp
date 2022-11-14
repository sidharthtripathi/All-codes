#include <iostream>
using namespace std;
class node{
public:
	int data;
	node* next_address;
	node(int data){
		this->data = data;

		next_address = NULL;
	}

};

void print_linked(node* head){
while(head!=NULL){

	cout<<head->data<<endl;
	head = head->next_address;

}

}

node* linked_input(){
int data;
cin>>data;
node* head = NULL;
while(data!=-1){
node* newnode = new node(data);
if(head==NULL){
	head = newnode;
}
else{
	node* temp = head;
	while(temp->next_address!=NULL){
		temp = temp->next_address;
	}
	temp->next_address = newnode;
}
cin>>data;

}
return head;

}
int main(){
	node* head = linked_input();
	print_linked(head);

}