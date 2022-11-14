#include <iostream>
using namespace std;
class node{
public:
int data;
node* next;
node(int data){
this -> data = data;
next = NULL;
}
};
node* getInput(){
node* head = NULL;
int data;
cin>>data;
while(data!=-1){
    node* n = new node(data);
    if(head == NULL){
        head = n;
    }
    else{
        node* temp = head;
        while(temp->next!=NULL){
            temp = temp->next;
        }
        temp->next = n;
    }

    cin>>data;

}
return head;
}
void print_linked(node* head){
while(head!=NULL){
    cout<<head->data<<" ";
    head = head->next;
}

}
int main(){

node* head = getInput();
print_linked(head);

}
