#include <iostream>
using namespace std;
class node{
public:
int data;
node* next;
public:
	node(int data){
		this->data = data;
		this->next = NULL;
	}


};
node* fill_input(){
	int data;
	cin>>data;
	node* head = NULL;
	node* tail = NULL;
	while(data!=-1){
		node* newnode = new node(data);
		if(head==NULL){
			head = newnode;
			tail = newnode;
		}
		else{
			tail->next = newnode;
			tail = tail->next;
		}
		cin>>data;
	}
	return head;

}
void print_linked(node* head){
	node* temp = head;
	while(temp!=NULL){
		cout<<temp->data<<endl;
		temp = temp->next;
	}

}
void insert_at_index(node* head , int index, int data){
	node* data_node = new node(data);
	node* temp = head;
	for(int i = 0 ; i<index-1 ; i++){
		temp = temp->next;
	}
	node* just_next = temp->next;
	temp->next = data_node;
	data_node->next = just_next;

}


int main(){


}