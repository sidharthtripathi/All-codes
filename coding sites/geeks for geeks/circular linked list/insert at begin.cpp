void insert_at_begin(node* &head, int data){
	if(head==NULL)
		return;
	node* temp = head;
	node* newnode = new node(data);
	newnode->next = head;
	while(temp->next!=head){
		temp = temp->next;
	}
	temp->next = newnode;
	head = newnode;


}