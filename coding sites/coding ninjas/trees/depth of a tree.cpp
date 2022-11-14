#include <iostream>using namespace std;#include <vector>class TreeNode{public:	int data;vector <TreeNode*> children;TreeNode(int data){	this->data = data;}};void print_tree(TreeNode* root){if(root == NULL)	return;cout<<root->data<<": ";for(TreeNode* i : root->children){	cout<<i->data<<",";}cout<<endl;for(TreeNode* i : root->children){	print_tree(i);}}TreeNode* take_input(){	int root_data;	cout<<"enter root data: ";	cin>>root_data;	TreeNode* root_node = new TreeNode(root_data);	cout<<"enter chldrens of root data: ";	int n;	cin>>n;	for(int i = 0 ; i<n ; i++){		TreeNode* child = take_input();		root_node->children.push_back(child);	}	return root_node;}int numOfNodes(TreeNode* root_node){int nodes = 1;for(TreeNode* i : root_node->children){	nodes = nodes + numOfNodes(i);}return nodes;}int heightOfTree(TreeNode* root_node){	vector <int> heights;	for(TreeNode* i : root_node->children){		heights.push_back(heightOfTree(i));	}	int maxi = 0;	for(int i : heights){		if(i>maxi)			maxi = i;	}	return maxi+1;}void printOfDepth(TreeNode* root_node,int depth){	if(depth==0){		cout<<root_node->data<<" ";		return;	}	for(TreeNode* i : root_node->children){		printOfDepth(i,depth-1);	}}int main(){	TreeNode* root_node = take_input();	cout<<heightOfTree(root_node);}