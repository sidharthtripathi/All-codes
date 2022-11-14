int find_element(node* head , int item){
	if(head == NULL){
		return -1;
	}
	node* temp = head;
	int place  = 1;
	while(temp!=NULL){
		if(temp->data == item)
			return place;
		place++;
		temp = temp->next;

	}
	return -1;

}