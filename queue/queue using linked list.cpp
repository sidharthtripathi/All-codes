#include <iostream>
using namespace std;
class node{
public:
	int data;
	node* next;
	node(int data){
		this->data  = data;
		next = NULL;
	}
};
class queu{
public:
	node* front = NULL;
	node* rear = NULL;
	int size = 0;

void push(int data){
	node* newnode = new node(data);
	if(rear == NULL){
		rear = newnode;
		front = newnode;
	}
	else{
	rear->next = newnode;
	rear = newnode;
}
size++;
}
void pop(){
if(size == 0)
	return;
node* temp = front;
front = front->next;
delete temp;
size--;

}
int first(){
	if(size == 0 )
		return -1;
	return front->data;
}

};
int main(){
	queu a;
int n; cin>>n;
for(int i = 0 ; i<n ; i++){
	int temp; cin>>temp;
	a.push(temp);
}	

for(int i = 0 ; i<n ; i++){
	cout<<a.first()<<" ";
	a.pop();

}


}