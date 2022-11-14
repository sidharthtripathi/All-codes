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
//node* temp_add = head;
while(head!=NULL){

	cout<<head->data<<endl;
	head = head->next_address;

}




}
int main(){
	node n1(34);
	node n2(45);
	node n3(42);
	node n4(22);
	node n5(89);
	node* head = &n1;
	n1.next_address = &n2;
	n2.next_address = &n3;
	n3.next_address = &n4;
	n4.next_address = &n5;
	cout<<head<<endl;
	print_linked(head);
	cout<<head<<endl;

}