#include <iostream>
using namespace std;
class node{
public:
    int data;
    node* adrs = NULL;
    node(int d){
    data = d;
    }

};
void insert_node(int i , int data,node* head){
node* n = new node(data);
int ite=0;
node* temp = head;
while(ite<i-1){
    temp = temp->adrs;
    ite++;
}
n->adrs = temp->adrs;
temp->adrs = n;


}
node* linked_input(){
    int data;
    cin>>data;
    node* head = NULL;
    node* tail = NULL;
    while(data!=-1){
        node* n = new node(data);
        if(head==NULL){
            head=n;
            tail = n;
        }
        else{
            tail->adrs = n;
            tail = n;
        }


      cin>>data;

    }
    return head;


}
void print_linked(node* head){
node* temp = head;
while(temp!=NULL){
    cout<<temp->data<<" ";
    temp = temp->adrs;
}

}
int main(){
node* head = linked_input();
print_linked(head);
int i,d;
cout<<endl<< "index and data to insert: ";
cin>>i>>d;
insert_node(i,d,head);
print_linked(head);

}
