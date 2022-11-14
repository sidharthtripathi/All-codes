#include <iostream>
using namespace std;
class node{
public:
int data;
node* next;
node(int data){  //  I could have used any other name than data but let it be cuz i wanted to learn "this" keyword
this -> data = data;
next = NULL;
}



};
void print_linked(node* head){
while(head!=NULL){
    cout<<head->data<<" ";
    head = head->next;
}



}
int main(){

node n1(10);
node* head = NULL;
node n2(20);
n1.next = &n2;
node n3(30);
n2.next=&n3;
node n4(40);
n3.next = &n4;
print_linked(head);



}
