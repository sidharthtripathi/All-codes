void insert_at_end(node* head , int data){
	if(head==NULL)
		return;
	node* temp = head;
	while(temp->next!=head){
		temp = temp->next;
	}
	node* newnode = new node(data);
	temp->next = newnode;
	newnode->next = head;
}