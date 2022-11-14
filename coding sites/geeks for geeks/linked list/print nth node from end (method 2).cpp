#include <iostream>
using namespace std;
#include <climits>
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

int last_nth_node(node* head , int n){
node* temp = head;
int size = 0 ;
while(temp!=NULL){
	temp = temp->next_address;
	size++;
}
if(n>size)
return INT_MIN;
int place = size - n + 1;
temp = head;
for(int i = 1 ; i<= place - 1; i++){
	if(temp==NULL)
		break;
	temp  = temp->next_address;
}
return temp->data;

}
int last_nth_node_m2(node* head, int n){
	node* temp1 = head;
	node* temp2 = head;
	for(int i = 1; i<=n ; i++){
		temp2 = temp2->next_address;
	}
	if(temp2==NULL){
		return INT_MIN;
	}
	while(temp2!=NULL){
		temp2 = temp2->next_address;
		temp1 = temp1->next_address;
	}
	return temp1->data;
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
	cout<<last_nth_node(head,3);
	
}