void insert_at_end(node* head , int data){

node* temp = head;
while(temp->next!=NULL){
temp = temp->next;
}
node* newnode = new node(data);
temp->next = newnode;
newnode->next = NULL;
newnode->prev = temp;

}