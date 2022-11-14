void delete_kth_node(node* &head , int pos){

	if(head == NULL)
		return;
	if(head->next == head and pos == 1){
		delete head;
		head = NULL;
	}
	if(pos==1){
		head = delete_head(head);



	}
	else{
	node* temp = head;
	for(int i = 1 ; i<pos-1  ; i++){
		temp = temp->next;
	}
	node* node_to_delete;
	node_to_delete = temp->next;
	temp->next = node_to_delete->next;
	delete node_to_delete;
}
}
