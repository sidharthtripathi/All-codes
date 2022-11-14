void insert_in_mid(node* head , int data){
	node* temp  = head;
	int size = 0 ;
	while(temp != NULL){
		temp=temp->next;
		size++;
	}
	//here we are assuming the mid is +1 if size is even
	int mid = size/2 + 1;
	node* newnode = new node(data);
	temp = head;
	for(int i = 1; i< mid-1; i++){
		temp = temp->next;
	}
	node* temp2 = temp->next;
	temp ->next = newnode;
	newnode->next = temp2;

}