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
void print_linked_recursively(node* head){
	if(head==NULL){
		return;
	}
	cout<<head->data<<endl;
	print_linked_recursively(head->next_address);


}

int main(){
	node* head = new node(56);
	node* temp1 = new node(78);
	node* temp2 = new node(90);
	node* temp3 = new node(38);

	head->next_address = temp1;
	temp1->next_address = temp2;
	temp2->next_address = temp3;
	print_linked(head);

}