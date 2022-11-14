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


}
