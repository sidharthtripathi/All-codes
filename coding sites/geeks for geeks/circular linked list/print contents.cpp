void print_circular(node* head){
if(head == NULL)
	return;
cout<<head->data<<endl;
for(node* p = head->next ; p!=head ; p = p->next){
	cout<<p->data<<endl;
}
}