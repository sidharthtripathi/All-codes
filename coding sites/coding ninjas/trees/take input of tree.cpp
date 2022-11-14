#include <iostream>
using namespace std;
#include <vector>
class TreeNode{
public:	
int data;
vector <TreeNode*> children;
TreeNode(int data){
	this->data = data;
}

};

void print_tree(TreeNode* root){
if(root == NULL)
	return;
cout<<root->data<<": ";
for(TreeNode* i : root->children){
	cout<<i->data<<",";
}
cout<<endl;
for(TreeNode* i : root->children){
	print_tree(i);
}
}

TreeNode* take_input(){
	int root_data;
	cout<<"enter root data: ";
	cin>>root_data;
	TreeNode* root_node = new TreeNode(root_data);
	cout<<"enter chldrens of root data: ";
	int n;
	cin>>n;
	for(int i = 0 ; i<n ; i++){
		TreeNode* child = take_input();
		root_node->children.push_back(child);
	}
	return root_node;
}




int main(){
	TreeNode* root_node =  take_input();
	print_tree(root_node);

}