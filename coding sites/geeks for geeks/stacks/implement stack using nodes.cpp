#include <iostream>
using namespace std;
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
    node* top_most = NULL;
    int boxes = 0;
    void push(int x){
        boxes++;
        node* newnode = new node(x);
        if(top_most!=NULL){
        top_most->next = newnode;
        newnode->prev = top_most;
        }   
        top_most = newnode;
    }
    int top(){
        return top_most->data;
    }
    int size(){
        return boxes;
    }
    void pop(){
        if(boxes==0){
            cout<<"underflow !";
            return;
        }
        node* temp = top_most;
        top_most = top_most->prev;
        delete temp;
        boxes--;
    }

};
int main(){
    stack a;
    a.push(34);
    a.pop();
    cout<<a.size()<<endl;
    a.pop();

    


}