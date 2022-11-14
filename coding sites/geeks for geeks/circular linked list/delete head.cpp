void delete_head(node* &head){
	if(head==NULL)
		return;
	if(head->next == head){
		delete head;
		head = NULL;
		return;
	}

	node* temp = head;
	while(temp->next != head){
		temp = temp->next;
	}
	temp->next = head->next;
	delete head;
	head = temp->next;
}