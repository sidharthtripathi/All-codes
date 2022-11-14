#include <iostream>
using namespace std;
#include <climits>
class node{
public:
	int data;
	node* next;
	node* prev;
	node(int x){
		data = x;
		next = NULL;
		prev = NULL;
	}
};
class stack{
public:
	node* head = NULL;
	node* tail = NULL;
	int len = 0;
	void push(int data){
		len++;
		node* newnode = new node(data);
		if(head == NULL){
			head = newnode;
			tail = newnode;
		}
		tail->next = newnode;
		newnode->prev = tail;
		tail = newnode;
	}
	int pop(){
		if(len<=0){
			cout<<"Underflow! ";
			return INT_MIN;
		}

		int last = tail->data;
		node* temp = tail;
		tail = tail->prev;
		delete temp;
		len--;
		return last;
	}
	int peek(){
		return tail->data;
	}
	int size(){
		return len;
	}
	bool isempty(){
		if(head==NULL){
			return true;
		}
		else
			return false;
	}


};


int main(){
	
stack a;
a.push(56);
a.push(45);
a.push(23);
cout<<a.peek()<<endl;
a.pop();
a.pop();
cout<<a.pop()<<endl;
cout<<a.size();

}