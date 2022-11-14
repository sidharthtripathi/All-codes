#include <iostream>
using namespace std;
#include <climits>
#include <vector>
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

void reverse_linked(node* head){
	node* temp = head;
	vector <int> elements;
	while(temp!=NULL){
		elements.push_back(temp->data);
		temp = temp->next_address;
	}
	int i = elements.size() -1;
	temp = head;
	while(temp!=NULL){
		temp->data = elements[i];
		temp = temp->next_address;
		i--;
	}

}
node* rev_linked_rec(node* head){
if(head==NULL or  head->next_address == NULL)
	return head;

node* rest_head = rev_linked_rec(head->next_address);
node* rest_tail = head->next_address;
rest_tail->next_address = head;
head->next_address = NULL;
return rest_head;

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
//  reverse_linked(head);
	cout<<"updated list"<<endl;
	head = rev_linked_rec(head);
	print_linked(head);

	
}