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
void remove_duplicates(node* head){
node* curr = head;
bool remove = false;
while(curr->next_address->next_address!= NULL){
	if(curr->data == curr->next_address->data){
		remove = true;
		node* temp = curr->next_address;
		curr->next_address = temp->next_address;
		//curr = curr->next_address;
		delete temp;
	}
	if(remove==false)
	curr = curr->next_address;
}

}


int main(){
	node* n1 = new node(34);
	node* n2 = new node(90);
	node* n3 = new node(90);
	node* n4 = new node(90);
	node* n5 = new node(9);
	node* head = n1;
	head->next_address = n2;
	n2->next_address = n3;
	n3->next_address = n4;
	n4->next_address = n5;
	print_linked(head);
	remove_duplicates(head);
	cout<<"updated list"<<endl;
	print_linked(head);

	
}