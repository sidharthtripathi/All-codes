int sum_of_nodes(node* head){
	node* head = head;
	int ans = 0 ;
	while(temp!=NULL){
		ans = ans + temp->data;
		temp = temp->next;
	}
	return ans;

}