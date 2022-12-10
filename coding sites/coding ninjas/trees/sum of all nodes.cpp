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

TreeNode* make_tree(){
//cout<<"Enter data:";
int data; cin>>data;
TreeNode* newtreenode = new TreeNode(data);
//cout<<"Enter childrens: ";
int n; cin>>n;
for(int i = 0 ; i<n; i++){
	newtreenode->children.push_back(make_tree()); 
}
return newtreenode;
}
void print_tree(TreeNode* treenode){


//print self data
	cout<<treenode->data<<" : ";
// then thier children's data
	for(int i = 0 ; i<treenode->children.size() ; i++){
		cout<<treenode->children[i]->data<<" , ";
	}
	cout<<endl;
	for(int i = 0 ;i<treenode->children.size() ; i++){
		print_tree(treenode->children[i]);
	}

}

int nodes_sum(TreeNode* rootnode){
if(rootnode == NULL)
	return -1;
int sum = 0;
for(int i = 0 ; i<rootnode->children.size() ; i++){
	sum = sum +nodes_sum(rootnode->children[i]);
}
return sum + rootnode->data;

}
int main(){
	
TreeNode* tree = make_tree();
cout<<nodes_sum(tree);
}

