void delete_head(node* &head){
	if(head==NULL or head->next==NULL)
		return;
	node* temp = head;
	temp->next->prev = NULL;
	head = temp->next;
	delete temp;
}