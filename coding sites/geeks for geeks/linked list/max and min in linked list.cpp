void max_and_min_linked_list(node* head , int &max , int &min){
		if(head == NULL){
			return;
		}
		max = head->data;
		min = head->data;
		node* temp = head->next;
		while(temp != NULL){
			if(temp->data < min){
				min = head->data;
			}
			if(temp->data > max){
				max = temp->data;
			}
			temp = temp->next;

		}


}