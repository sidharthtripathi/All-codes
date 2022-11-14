int list_size(node* head){
	int size = 0 ;
	while(head!= NULL){
		size++;
		head = head->next;
	}
	return size;
}