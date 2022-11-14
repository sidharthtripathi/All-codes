void insert_at_pos(node* &head , int pos ,int data){
	if(head==NULL)
		return;
	if(pos==1){
		node* newnode = new node(data);
		newnode->next = head;
		head = newnode;
		return;
	}
	node* temp  = head;
	int size = 0 ;
	while(temp != NULL){
		temp=temp->next;
		size++;
	}
	if(pos>size)
		return;
	temp = head;
	for(int i = 1;i<pos-1;i++){
		temp = temp->next;
	}
	node* newnode = new node(data);
	node* temp2 = temp->next;
	temp->next = newnode;
	newnode->next = temp2;

}