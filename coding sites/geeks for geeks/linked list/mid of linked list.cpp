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
int mid_node(node* head){
int size = 0 ;
node* temp = head;
while(temp!=NULL){
	temp = temp->next_address;
	size++;
}
temp = head;
int mid = size/2 +1 ;
for(int i = 1; i<= mid-1 ; i++){
	temp = temp->next_address;
}
return temp->data;


}
int main(){
	node* n1 = new node(34);
	node* n2 = new node(45);
	node* n3 = new node(90);
	node* n4 = new node(44);
	node* n5 = new node(89);
	node* head = n1;
	head->next_address = n2;
	n2->next_address = n3;
	n3->next_address = n4;
	n4->next_address = n5;
	print_linked(head);
	cout<<"updated list"<<endl;
	cout<<mid_node(head);
	
}