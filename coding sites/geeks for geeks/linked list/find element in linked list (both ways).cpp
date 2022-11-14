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
int find_in_linked(node* head , int item){
	int place = 1 ;
	while(head!=NULL){
		if(head->data==item){
			return place;
		}
		head = head->next_address;
		place++;
	}
	return -1;
}
int find_in_linked_recursively(node* head , int item,int place=0){
	if(head==NULL){
		return -1;
	}
	place++;
	if(head->data == item)
		return place;
	int position = find_in_linked_recursively(head->next_address , item , place);
	return position;



}
int main(){
	node* head = new node(56);
	node* temp1 = new node(78);
	node* temp2 = new node(90);
	node* temp3 = new node(38);

	head->next_address = temp1;
	temp1->next_address = temp2;
	temp2->next_address = temp3;
	cout<<find_in_linked_recursively(head,56);

}