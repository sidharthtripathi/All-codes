void join_linked_list(node* head1 , node* head2){
node* temp = head1;
while(temp->next!=NULL){
	temp=temp->next;
}
temp->next = head2;


}