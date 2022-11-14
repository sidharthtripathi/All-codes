void insert_at_begin(node* &head , int data){
	if(head==NULL)
		return;
	node* newnode = new node(data);
	newnode->next = head;
	head->prev = newnode;
	head = newnode;

}
void print_linked(node* head){
	if(head == NULL)
		return;
	node* temp = head;
	while(temp!= NULL){
		cout<<temp->data<<endl;
		temp = temp->next;
	}	
}