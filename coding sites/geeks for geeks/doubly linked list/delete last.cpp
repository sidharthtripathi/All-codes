void delete_last(node* head){
	node* temp = head;
	while(temp->next != NULL){
		temp = temp->next;
	}
	temp->prev->next = NULL;
	delete temp;

}