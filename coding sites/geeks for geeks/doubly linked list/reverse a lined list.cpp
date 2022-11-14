void reverse_linked(node* &head){
	if(head == NULL or head->next == NULL)
		return;
node* temp = head;
node* prev = NULL;
while(temp != NULL){
	prev = temp->prev;
	temp->prev = temp->next;
	temp->next = prev;
	temp = temp->prev;
}
head = prev->prev;

}
